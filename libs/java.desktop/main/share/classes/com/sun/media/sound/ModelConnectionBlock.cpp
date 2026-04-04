#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDestination.h>
#include <com/sun/media/sound/ModelSource.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ModelSourceArray = $Array<::com::sun::media::sound::ModelSource>;
using $ModelDestination = ::com::sun::media::sound::ModelDestination;
using $ModelSource = ::com::sun::media::sound::ModelSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$ModelSourceArray* ModelConnectionBlock::no_sources = nullptr;

void ModelConnectionBlock::init$() {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = 1;
}

void ModelConnectionBlock::init$(double scale, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = 1;
	this->scale = scale;
	$set(this, destination, destination);
}

void ModelConnectionBlock::init$($ModelSource* source, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = 1;
	if (source != nullptr) {
		$set(this, sources, $new($ModelSourceArray, 1));
		this->sources->set(0, source);
	}
	$set(this, destination, destination);
}

void ModelConnectionBlock::init$($ModelSource* source, double scale, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = 1;
	if (source != nullptr) {
		$set(this, sources, $new($ModelSourceArray, 1));
		this->sources->set(0, source);
	}
	this->scale = scale;
	$set(this, destination, destination);
}

void ModelConnectionBlock::init$($ModelSource* source, $ModelSource* control, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = 1;
	if (source != nullptr) {
		if (control == nullptr) {
			$set(this, sources, $new($ModelSourceArray, 1));
			this->sources->set(0, source);
		} else {
			$set(this, sources, $new($ModelSourceArray, 2));
			this->sources->set(0, source);
			this->sources->set(1, control);
		}
	}
	$set(this, destination, destination);
}

void ModelConnectionBlock::init$($ModelSource* source, $ModelSource* control, double scale, $ModelDestination* destination) {
	$set(this, sources, ModelConnectionBlock::no_sources);
	this->scale = 1;
	if (source != nullptr) {
		if (control == nullptr) {
			$set(this, sources, $new($ModelSourceArray, 1));
			this->sources->set(0, source);
		} else {
			$set(this, sources, $new($ModelSourceArray, 2));
			this->sources->set(0, source);
			this->sources->set(1, control);
		}
	}
	this->scale = scale;
	$set(this, destination, destination);
}

$ModelDestination* ModelConnectionBlock::getDestination() {
	return this->destination;
}

void ModelConnectionBlock::setDestination($ModelDestination* destination) {
	$set(this, destination, destination);
}

double ModelConnectionBlock::getScale() {
	return this->scale;
}

void ModelConnectionBlock::setScale(double scale) {
	this->scale = scale;
}

$ModelSourceArray* ModelConnectionBlock::getSources() {
	return $cast($ModelSourceArray, $Arrays::copyOf(this->sources, $nc(this->sources)->length));
}

void ModelConnectionBlock::setSources($ModelSourceArray* source) {
	$set(this, sources, source == nullptr ? ModelConnectionBlock::no_sources : $cast($ModelSourceArray, $Arrays::copyOf(source, source->length)));
}

void ModelConnectionBlock::addSource($ModelSource* source) {
	$var($ModelSourceArray, oldsources, this->sources);
	$set(this, sources, $new($ModelSourceArray, $nc(oldsources)->length + 1));
	$System::arraycopy(oldsources, 0, this->sources, 0, oldsources->length);
	this->sources->set(this->sources->length - 1, source);
}

void ModelConnectionBlock::clinit$($Class* clazz) {
	$assignStatic(ModelConnectionBlock::no_sources, $new($ModelSourceArray, 0));
}

ModelConnectionBlock::ModelConnectionBlock() {
}

$Class* ModelConnectionBlock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"no_sources", "[Lcom/sun/media/sound/ModelSource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelConnectionBlock, no_sources)},
		{"sources", "[Lcom/sun/media/sound/ModelSource;", nullptr, $PRIVATE, $field(ModelConnectionBlock, sources)},
		{"scale", "D", nullptr, $PRIVATE, $field(ModelConnectionBlock, scale)},
		{"destination", "Lcom/sun/media/sound/ModelDestination;", nullptr, $PRIVATE, $field(ModelConnectionBlock, destination)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModelConnectionBlock, init$, void)},
		{"<init>", "(DLcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, init$, void, double, $ModelDestination*)},
		{"<init>", "(Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, init$, void, $ModelSource*, $ModelDestination*)},
		{"<init>", "(Lcom/sun/media/sound/ModelSource;DLcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, init$, void, $ModelSource*, double, $ModelDestination*)},
		{"<init>", "(Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, init$, void, $ModelSource*, $ModelSource*, $ModelDestination*)},
		{"<init>", "(Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelSource;DLcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, init$, void, $ModelSource*, $ModelSource*, double, $ModelDestination*)},
		{"addSource", "(Lcom/sun/media/sound/ModelSource;)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, addSource, void, $ModelSource*)},
		{"getDestination", "()Lcom/sun/media/sound/ModelDestination;", nullptr, $PUBLIC, $method(ModelConnectionBlock, getDestination, $ModelDestination*)},
		{"getScale", "()D", nullptr, $PUBLIC, $method(ModelConnectionBlock, getScale, double)},
		{"getSources", "()[Lcom/sun/media/sound/ModelSource;", nullptr, $PUBLIC, $method(ModelConnectionBlock, getSources, $ModelSourceArray*)},
		{"setDestination", "(Lcom/sun/media/sound/ModelDestination;)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, setDestination, void, $ModelDestination*)},
		{"setScale", "(D)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, setScale, void, double)},
		{"setSources", "([Lcom/sun/media/sound/ModelSource;)V", nullptr, $PUBLIC, $method(ModelConnectionBlock, setSources, void, $ModelSourceArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.ModelConnectionBlock",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModelConnectionBlock, name, initialize, &classInfo$$, ModelConnectionBlock::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModelConnectionBlock);
	});
	return class$;
}

$Class* ModelConnectionBlock::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com