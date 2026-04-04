#include <com/sun/media/sound/ModelStandardDirector.h>
#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ModelConnectionBlockArray = $Array<::com::sun::media::sound::ModelConnectionBlock>;
using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelDirectedPlayer = ::com::sun::media::sound::ModelDirectedPlayer;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void ModelStandardDirector::init$($ModelPerformerArray* performers, $ModelDirectedPlayer* player) {
	$useLocalObjectStack();
	this->noteOnUsed = false;
	this->noteOffUsed = false;
	$set(this, performers, $cast($ModelPerformerArray, $Arrays::copyOf(performers, $nc(performers)->length)));
	$set(this, player, player);
	{
		$var($ModelPerformerArray, arr$, this->performers);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($ModelPerformer, p, arr$->get(i$));
			if ($nc(p)->isReleaseTriggered()) {
				this->noteOffUsed = true;
			} else {
				this->noteOnUsed = true;
			}
		}
	}
}

void ModelStandardDirector::close() {
}

void ModelStandardDirector::noteOff(int32_t noteNumber, int32_t velocity) {
	$useLocalObjectStack();
	if (!this->noteOffUsed) {
		return;
	}
	for (int32_t i = 0; i < $nc(this->performers)->length; ++i) {
		$var($ModelPerformer, p, this->performers->get(i));
		bool var$0 = $nc(p)->getKeyFrom() <= noteNumber;
		if (var$0 && p->getKeyTo() >= noteNumber) {
			bool var$1 = p->getVelFrom() <= velocity;
			if (var$1 && p->getVelTo() >= velocity) {
				if (p->isReleaseTriggered()) {
					$nc(this->player)->play(i, nullptr);
				}
			}
		}
	}
}

void ModelStandardDirector::noteOn(int32_t noteNumber, int32_t velocity) {
	$useLocalObjectStack();
	if (!this->noteOnUsed) {
		return;
	}
	for (int32_t i = 0; i < $nc(this->performers)->length; ++i) {
		$var($ModelPerformer, p, this->performers->get(i));
		bool var$0 = $nc(p)->getKeyFrom() <= noteNumber;
		if (var$0 && p->getKeyTo() >= noteNumber) {
			bool var$1 = p->getVelFrom() <= velocity;
			if (var$1 && p->getVelTo() >= velocity) {
				if (!p->isReleaseTriggered()) {
					$nc(this->player)->play(i, nullptr);
				}
			}
		}
	}
}

ModelStandardDirector::ModelStandardDirector() {
}

$Class* ModelStandardDirector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"performers", "[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PRIVATE | $FINAL, $field(ModelStandardDirector, performers)},
		{"player", "Lcom/sun/media/sound/ModelDirectedPlayer;", nullptr, $PRIVATE | $FINAL, $field(ModelStandardDirector, player)},
		{"noteOnUsed", "Z", nullptr, $PRIVATE, $field(ModelStandardDirector, noteOnUsed)},
		{"noteOffUsed", "Z", nullptr, $PRIVATE, $field(ModelStandardDirector, noteOffUsed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lcom/sun/media/sound/ModelPerformer;Lcom/sun/media/sound/ModelDirectedPlayer;)V", nullptr, $PUBLIC, $method(ModelStandardDirector, init$, void, $ModelPerformerArray*, $ModelDirectedPlayer*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ModelStandardDirector, close, void)},
		{"noteOff", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelStandardDirector, noteOff, void, int32_t, int32_t)},
		{"noteOn", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelStandardDirector, noteOn, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.ModelStandardDirector",
		"java.lang.Object",
		"com.sun.media.sound.ModelDirector",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModelStandardDirector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelStandardDirector);
	});
	return class$;
}

$Class* ModelStandardDirector::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com