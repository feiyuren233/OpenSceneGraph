/**********************************************************************
 *
 *    FILE:            Billboard.cpp
 *
 *    DESCRIPTION:    Read/Write osg::Billboard in binary format to disk.
 *
 *    CREATED BY:        Auto generated by iveGenerate
 *                    and later modified by Rune Schmidt Jensen.
 *
 *    HISTORY:        Created 24.3.2003
 *
 *    Copyright 2003 VR-C
 **********************************************************************/

#include "Exception.h"
#include "Billboard.h"
#include "Geode.h"

using namespace ive;

void Billboard::write(DataOutputStream* out){
    // Write Billboard's identification.
    out->writeInt(IVEBILLBOARD);
    // If the osg class is inherited by any other class we should also write this to file.
    osg::Geode*  geode = dynamic_cast<osg::Geode*>(this);
    if(geode){
        ((ive::Geode*)(geode))->write(out);
    }
    else
        throw Exception("Billboard::write(): Could not cast this osg::Billboard to an osg::Geode.");
    // Write Billboard's properties.

    // Write mode
    out->writeInt(getMode());
    // Write axis
    out->writeVec3(getAxis());
    // Write normal
    out->writeVec3(getNormal());
    // Write positions
    int size = _positionList.size();
    out->writeInt(size);
    for(int i=0;i<size;i++){
        out->writeVec3(getPosition(i));
    }
}

void Billboard::read(DataInputStream* in){
    // Peek on Billboard's identification.
    int id = in->peekInt();
    if(id == IVEBILLBOARD){
        // Read Billboard's identification.
        id = in->readInt();
        // If the osg class is inherited by any other class we should also read this from file.
        osg::Geode*  geode = dynamic_cast<osg::Geode*>(this);
        if(geode){
            ((ive::Geode*)(geode))->read(in);
        }
        else
            throw Exception("Billboard::read(): Could not cast this osg::Billboard to an osg::Geode.");
        // Read Billboard's properties

        // Read mode
        setMode((osg::Billboard::Mode)in->readInt());
        // Read axis
        setAxis(in->readVec3());
        // Read normal
        setNormal(in->readVec3());
        // Read positions
        int size = in->readInt();
        for(int i=0;i<size;i++){
            setPosition(i,in->readVec3());
        }

    }
    else{
        throw Exception("Billboard::read(): Expected Billboard identification.");
    }
}
