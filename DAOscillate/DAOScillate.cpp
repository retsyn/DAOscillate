#include "DAOscillate.h"

#include <cmath>

MTypeId DAOscillateNode::id(0x00001967);

MObject DAOscillateNode::aInChannel;
MObject DAOscillateNode::aAmplitude;
MObject DAOscillateNode::aDampening;
MObject DAOscillateNode::aPeriod;
MObject DAOscillateNode::aOutChannel;
MObject DAOscillateNode::aTime;

DAOscillateNode::DAOscillateNode()
{

}

DAOscillateNode::~DAOscillateNode()
{

}

void* DAOscillateNode::creator()
{
	return new DAOscillateNode();
}

MStatus DAOscillateNode::compute(const MPlug& plug, MDataBlock& data) 
{
	MStatus status;

	return MS::kSuccess;
}


MStatus DAOscillateNode::initialize()
{
	MStatus status;
	MFnNumericAttribute nAttr;

	// Define plugs here...
	// In and Out Channels
	aOutChannel = nAttr.create("outChannel", "outChannel", MFnNumericData::kDouble);
	nAttr.setWritable(false);
	nAttr.setStorable(false);
	addAttribute(aOutChannel);

	aInChannel = nAttr.create("inChannel", "inChannel", MFnNumericData::kDouble);
	nAttr.setKeyable(true);
	nAttr.setWritable(true);
	addAttribute(aInChannel);
	attributeAffects(aInChannel, aOutChannel);


	// Time
	aTime = nAttr.create("inputTime", "inputTime", MFnNumericData::kDouble);
	nAttr.setKeyable(true);
	nAttr.setWritable(true);
	addAttribute(aTime);


	// Sine function attributes:
	aAmplitude = nAttr.create("amplitude", "amplitude", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	nAttr.setWritable(true);
	addAttribute(aAmplitude);
	attributeAffects(aAmplitude, aOutChannel);

	aDampening = nAttr.create("dampening", "dampening", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	nAttr.setWritable(true);
	addAttribute(aDampening);
	attributeAffects(aDampening, aOutChannel);

	aPeriod = nAttr.create("period", "period", MFnNumericData::kFloat);
	nAttr.setKeyable(true);
	nAttr.setWritable(true);
	addAttribute(aDampening);
	attributeAffects(aDampening, aOutChannel);

	return MS::kSuccess;
}