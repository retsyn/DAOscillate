#ifndef DAOSCILLATE_H
#define DAOSCILLATE_H

#include <maya/MPxNode.h>
#include <maya/MFnNumericAttribute.h>
#include <maya/MVector.h>
#include <maya/MMatrix.h>

#include <cmath>

class DAOscillateNode : public MPxNode
{
public:
	DAOscillateNode();

	virtual ~DAOscillateNode();
	static void* creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus initialize();

	static MTypeId id;

	static MObject aInChannel;
	static MObject aAmplitude;
	static MObject aDampening;
	static MObject aPeriod;
	static MObject aOutChannel;
	static MObject aTime;

};

#endif
