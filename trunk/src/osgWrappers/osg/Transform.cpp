// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Matrix>
#include <osg/MatrixTransform>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/PositionAttitudeTransform>
#include <osg/Transform>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::Transform::ReferenceFrame)
	I_EnumLabel(osg::Transform::RELATIVE_RF);
	I_EnumLabel(osg::Transform::ABSOLUTE_RF);
	I_EnumLabel(osg::Transform::ABSOLUTE_RF_INHERIT_VIEWPOINT);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Transform)
	I_BaseType(osg::Group);
	I_Constructor0(____Transform,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Transform &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Transform__C5_Transform_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method0(osg::Transform *, asTransform,
	          Properties::VIRTUAL,
	          __Transform_P1__asTransform,
	          "Convert 'this' into a Transform pointer if Node is a Transform, otherwise return 0. ",
	          "Equivalent to dynamic_cast<Transform*>(this). ");
	I_Method0(const osg::Transform *, asTransform,
	          Properties::VIRTUAL,
	          __C5_Transform_P1__asTransform,
	          "convert 'const this' into a const Transform pointer if Node is a Transform, otherwise return 0. ",
	          "Equivalent to dynamic_cast<const Transform*>(this). ");
	I_Method0(osg::MatrixTransform *, asMatrixTransform,
	          Properties::VIRTUAL,
	          __MatrixTransform_P1__asMatrixTransform,
	          "",
	          "");
	I_Method0(const osg::MatrixTransform *, asMatrixTransform,
	          Properties::VIRTUAL,
	          __C5_MatrixTransform_P1__asMatrixTransform,
	          "",
	          "");
	I_Method0(osg::PositionAttitudeTransform *, asPositionAttitudeTransform,
	          Properties::VIRTUAL,
	          __PositionAttitudeTransform_P1__asPositionAttitudeTransform,
	          "",
	          "");
	I_Method0(const osg::PositionAttitudeTransform *, asPositionAttitudeTransform,
	          Properties::VIRTUAL,
	          __C5_PositionAttitudeTransform_P1__asPositionAttitudeTransform,
	          "",
	          "");
	I_Method1(void, setReferenceFrame, IN, osg::Transform::ReferenceFrame, rf,
	          Properties::NON_VIRTUAL,
	          __void__setReferenceFrame__ReferenceFrame,
	          "Set the transform's ReferenceFrame, either to be relative to its parent reference frame, or relative to an absolute coordinate frame. ",
	          "RELATIVE_RF is the default. Note: Setting the ReferenceFrame to be ABSOLUTE_RF will also set the CullingActive flag on the transform, and hence all of its parents, to false, thereby disabling culling of it and all its parents. This is neccessary to prevent inappropriate culling, but may impact cull times if the absolute transform is deep in the scene graph. It is therefore recommended to only use absolute Transforms at the top of the scene, for such things as heads up displays. ABSOLUTE_RF_INHERIT_VIEWPOINT is the same as ABSOLUTE_RF except it adds the ability to use the parents view points position in world coordinates as its local viewpoint in the new coordinates frame. This is useful for Render to texture Cameras that wish to use the main views LOD range computation (which uses the viewpoint rather than the eye point) rather than use the local eye point defined by the this Transforms' abosolute view matrix.");
	I_Method0(osg::Transform::ReferenceFrame, getReferenceFrame,
	          Properties::NON_VIRTUAL,
	          __ReferenceFrame__getReferenceFrame,
	          "",
	          "");
	I_Method2(bool, computeLocalToWorldMatrix, IN, osg::Matrix &, matrix, IN, osg::NodeVisitor *, x,
	          Properties::VIRTUAL,
	          __bool__computeLocalToWorldMatrix__Matrix_R1__NodeVisitor_P1,
	          "",
	          "");
	I_Method2(bool, computeWorldToLocalMatrix, IN, osg::Matrix &, matrix, IN, osg::NodeVisitor *, x,
	          Properties::VIRTUAL,
	          __bool__computeWorldToLocalMatrix__Matrix_R1__NodeVisitor_P1,
	          "",
	          "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __BoundingSphere__computeBound,
	          "Overrides Group's computeBound. ",
	          "There is no need to override in subclasses from osg::Transform since this computeBound() uses the underlying matrix (calling computeMatrix if required).");
	I_SimpleProperty(osg::Transform::ReferenceFrame, ReferenceFrame, 
	                 __ReferenceFrame__getReferenceFrame, 
	                 __void__setReferenceFrame__ReferenceFrame);
END_REFLECTOR

