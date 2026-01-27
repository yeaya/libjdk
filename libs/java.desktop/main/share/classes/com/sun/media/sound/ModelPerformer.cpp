#include <com/sun/media/sound/ModelPerformer.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelPerformer_FieldInfo_[] = {
	{"oscillators", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/ModelOscillator;>;", $PRIVATE | $FINAL, $field(ModelPerformer, oscillators)},
	{"connectionBlocks", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/ModelConnectionBlock;>;", $PRIVATE, $field(ModelPerformer, connectionBlocks)},
	{"keyFrom", "I", nullptr, $PRIVATE, $field(ModelPerformer, keyFrom)},
	{"keyTo", "I", nullptr, $PRIVATE, $field(ModelPerformer, keyTo)},
	{"velFrom", "I", nullptr, $PRIVATE, $field(ModelPerformer, velFrom)},
	{"velTo", "I", nullptr, $PRIVATE, $field(ModelPerformer, velTo)},
	{"exclusiveClass", "I", nullptr, $PRIVATE, $field(ModelPerformer, exclusiveClass)},
	{"releaseTrigger", "Z", nullptr, $PRIVATE, $field(ModelPerformer, releaseTrigger)},
	{"selfNonExclusive", "Z", nullptr, $PRIVATE, $field(ModelPerformer, selfNonExclusive)},
	{"userObject", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ModelPerformer, userObject)},
	{"addDefaultConnections", "Z", nullptr, $PRIVATE, $field(ModelPerformer, addDefaultConnections)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ModelPerformer, name)},
	{}
};

$MethodInfo _ModelPerformer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ModelPerformer, init$, void)},
	{"getConnectionBlocks", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/ModelConnectionBlock;>;", $PUBLIC, $method(ModelPerformer, getConnectionBlocks, $List*)},
	{"getExclusiveClass", "()I", nullptr, $PUBLIC, $method(ModelPerformer, getExclusiveClass, int32_t)},
	{"getKeyFrom", "()I", nullptr, $PUBLIC, $method(ModelPerformer, getKeyFrom, int32_t)},
	{"getKeyTo", "()I", nullptr, $PUBLIC, $method(ModelPerformer, getKeyTo, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ModelPerformer, getName, $String*)},
	{"getOscillators", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/ModelOscillator;>;", $PUBLIC, $method(ModelPerformer, getOscillators, $List*)},
	{"getUserObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(ModelPerformer, getUserObject, $Object*)},
	{"getVelFrom", "()I", nullptr, $PUBLIC, $method(ModelPerformer, getVelFrom, int32_t)},
	{"getVelTo", "()I", nullptr, $PUBLIC, $method(ModelPerformer, getVelTo, int32_t)},
	{"isDefaultConnectionsEnabled", "()Z", nullptr, $PUBLIC, $method(ModelPerformer, isDefaultConnectionsEnabled, bool)},
	{"isReleaseTriggered", "()Z", nullptr, $PUBLIC, $method(ModelPerformer, isReleaseTriggered, bool)},
	{"isSelfNonExclusive", "()Z", nullptr, $PUBLIC, $method(ModelPerformer, isSelfNonExclusive, bool)},
	{"setConnectionBlocks", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/media/sound/ModelConnectionBlock;>;)V", $PUBLIC, $method(ModelPerformer, setConnectionBlocks, void, $List*)},
	{"setDefaultConnectionsEnabled", "(Z)V", nullptr, $PUBLIC, $method(ModelPerformer, setDefaultConnectionsEnabled, void, bool)},
	{"setExclusiveClass", "(I)V", nullptr, $PUBLIC, $method(ModelPerformer, setExclusiveClass, void, int32_t)},
	{"setKeyFrom", "(I)V", nullptr, $PUBLIC, $method(ModelPerformer, setKeyFrom, void, int32_t)},
	{"setKeyTo", "(I)V", nullptr, $PUBLIC, $method(ModelPerformer, setKeyTo, void, int32_t)},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ModelPerformer, setName, void, $String*)},
	{"setReleaseTriggered", "(Z)V", nullptr, $PUBLIC, $method(ModelPerformer, setReleaseTriggered, void, bool)},
	{"setSelfNonExclusive", "(Z)V", nullptr, $PUBLIC, $method(ModelPerformer, setSelfNonExclusive, void, bool)},
	{"setUserObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ModelPerformer, setUserObject, void, Object$*)},
	{"setVelFrom", "(I)V", nullptr, $PUBLIC, $method(ModelPerformer, setVelFrom, void, int32_t)},
	{"setVelTo", "(I)V", nullptr, $PUBLIC, $method(ModelPerformer, setVelTo, void, int32_t)},
	{}
};

$ClassInfo _ModelPerformer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelPerformer",
	"java.lang.Object",
	nullptr,
	_ModelPerformer_FieldInfo_,
	_ModelPerformer_MethodInfo_
};

$Object* allocate$ModelPerformer($Class* clazz) {
	return $of($alloc(ModelPerformer));
}

void ModelPerformer::init$() {
	$set(this, oscillators, $new($ArrayList));
	$set(this, connectionBlocks, $new($ArrayList));
	this->keyFrom = 0;
	this->keyTo = 127;
	this->velFrom = 0;
	this->velTo = 127;
	this->exclusiveClass = 0;
	this->releaseTrigger = false;
	this->selfNonExclusive = false;
	$set(this, userObject, nullptr);
	this->addDefaultConnections = true;
	$set(this, name, nullptr);
}

$String* ModelPerformer::getName() {
	return this->name;
}

void ModelPerformer::setName($String* name) {
	$set(this, name, name);
}

$List* ModelPerformer::getConnectionBlocks() {
	return this->connectionBlocks;
}

void ModelPerformer::setConnectionBlocks($List* connectionBlocks) {
	$set(this, connectionBlocks, connectionBlocks);
}

$List* ModelPerformer::getOscillators() {
	return this->oscillators;
}

int32_t ModelPerformer::getExclusiveClass() {
	return this->exclusiveClass;
}

void ModelPerformer::setExclusiveClass(int32_t exclusiveClass) {
	this->exclusiveClass = exclusiveClass;
}

bool ModelPerformer::isSelfNonExclusive() {
	return this->selfNonExclusive;
}

void ModelPerformer::setSelfNonExclusive(bool selfNonExclusive) {
	this->selfNonExclusive = selfNonExclusive;
}

int32_t ModelPerformer::getKeyFrom() {
	return this->keyFrom;
}

void ModelPerformer::setKeyFrom(int32_t keyFrom) {
	this->keyFrom = keyFrom;
}

int32_t ModelPerformer::getKeyTo() {
	return this->keyTo;
}

void ModelPerformer::setKeyTo(int32_t keyTo) {
	this->keyTo = keyTo;
}

int32_t ModelPerformer::getVelFrom() {
	return this->velFrom;
}

void ModelPerformer::setVelFrom(int32_t velFrom) {
	this->velFrom = velFrom;
}

int32_t ModelPerformer::getVelTo() {
	return this->velTo;
}

void ModelPerformer::setVelTo(int32_t velTo) {
	this->velTo = velTo;
}

bool ModelPerformer::isReleaseTriggered() {
	return this->releaseTrigger;
}

void ModelPerformer::setReleaseTriggered(bool value) {
	this->releaseTrigger = value;
}

$Object* ModelPerformer::getUserObject() {
	return $of(this->userObject);
}

void ModelPerformer::setUserObject(Object$* object) {
	$set(this, userObject, object);
}

bool ModelPerformer::isDefaultConnectionsEnabled() {
	return this->addDefaultConnections;
}

void ModelPerformer::setDefaultConnectionsEnabled(bool addDefaultConnections) {
	this->addDefaultConnections = addDefaultConnections;
}

ModelPerformer::ModelPerformer() {
}

$Class* ModelPerformer::load$($String* name, bool initialize) {
	$loadClass(ModelPerformer, name, initialize, &_ModelPerformer_ClassInfo_, allocate$ModelPerformer);
	return class$;
}

$Class* ModelPerformer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com