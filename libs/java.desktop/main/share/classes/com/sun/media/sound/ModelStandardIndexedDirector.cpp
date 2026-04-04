#include <com/sun/media/sound/ModelStandardIndexedDirector.h>
#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ModelConnectionBlockArray = $Array<::com::sun::media::sound::ModelConnectionBlock>;
using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $byteArray2 = $Array<int8_t, 2>;
using $intArray2 = $Array<int32_t, 2>;
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

void ModelStandardIndexedDirector::init$($ModelPerformerArray* performers, $ModelDirectedPlayer* player) {
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
	buildindex();
}

$ints* ModelStandardIndexedDirector::lookupIndex(int32_t x, int32_t y) {
	if ((x >= 0) && (x < 128) && (y >= 0) && (y < 128)) {
		int32_t xt = $nc($nc(this->trantables)->get(0))->get(x);
		int32_t yt = $nc(this->trantables->get(1))->get(y);
		if (xt != -1 && yt != -1) {
			return $nc(this->mat)->get(xt + yt * $nc(this->counters)->get(0));
		}
	}
	return nullptr;
}

int32_t ModelStandardIndexedDirector::restrict(int32_t value) {
	if (value < 0) {
		return 0;
	}
	if (value > 127) {
		return 127;
	}
	return value;
}

void ModelStandardIndexedDirector::buildindex() {
	$useLocalObjectStack();
	$set(this, trantables, $new($byteArray2, 2, 129));
	$set(this, counters, $new($ints, this->trantables->length));
	{
		$var($ModelPerformerArray, arr$, this->performers);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($ModelPerformer, performer, arr$->get(i$));
			{
				int32_t keyFrom = $nc(performer)->getKeyFrom();
				int32_t keyTo = performer->getKeyTo();
				int32_t velFrom = performer->getVelFrom();
				int32_t velTo = performer->getVelTo();
				if (keyFrom > keyTo) {
					continue;
				}
				if (velFrom > velTo) {
					continue;
				}
				keyFrom = restrict(keyFrom);
				keyTo = restrict(keyTo);
				velFrom = restrict(velFrom);
				velTo = restrict(velTo);
				$nc($nc(this->trantables)->get(0))->set(keyFrom, 1);
				$nc(this->trantables->get(0))->set(keyTo + 1, 1);
				$nc(this->trantables->get(1))->set(velFrom, 1);
				$nc(this->trantables->get(1))->set(velTo + 1, 1);
			}
		}
	}
	for (int32_t d = 0; d < $nc(this->trantables)->length; ++d) {
		$var($bytes, trantable, this->trantables->get(d));
		int32_t transize = $nc(trantable)->length;
		for (int32_t i = transize - 1; i >= 0; --i) {
			if (trantable->get(i) == 1) {
				trantable->set(i, -1);
				break;
			}
			trantable->set(i, -1);
		}
		int32_t counter = -1;
		for (int32_t i = 0; i < transize; ++i) {
			if (trantable->get(i) != 0) {
				++counter;
				if (trantable->get(i) == -1) {
					break;
				}
			}
			trantable->set(i, (int8_t)counter);
		}
		$nc(this->counters)->set(d, counter);
	}
	$set(this, mat, $new($intArray2, $nc(this->counters)->get(0) * $nc(this->counters)->get(1)));
	int32_t ix = 0;
	{
		$var($ModelPerformerArray, arr$, this->performers);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($ModelPerformer, performer, arr$->get(i$));
			{
				int32_t keyFrom = $nc(performer)->getKeyFrom();
				int32_t keyTo = performer->getKeyTo();
				int32_t velFrom = performer->getVelFrom();
				int32_t velTo = performer->getVelTo();
				if (keyFrom > keyTo) {
					continue;
				}
				if (velFrom > velTo) {
					continue;
				}
				keyFrom = restrict(keyFrom);
				keyTo = restrict(keyTo);
				velFrom = restrict(velFrom);
				velTo = restrict(velTo);
				int32_t x_from = $nc($nc(this->trantables)->get(0))->get(keyFrom);
				int32_t x_to = $nc(this->trantables->get(0))->get(keyTo + 1);
				int32_t y_from = $nc(this->trantables->get(1))->get(velFrom);
				int32_t y_to = $nc(this->trantables->get(1))->get(velTo + 1);
				if (x_to == -1) {
					x_to = $nc(this->counters)->get(0);
				}
				if (y_to == -1) {
					y_to = $nc(this->counters)->get(1);
				}
				for (int32_t y = y_from; y < y_to; ++y) {
					int32_t i = x_from + y * $nc(this->counters)->get(0);
					for (int32_t x = x_from; x < x_to; ++x) {
						$var($ints, mprev, $nc(this->mat)->get(i));
						if (mprev == nullptr) {
							this->mat->set(i, $$new($ints, {ix}));
						} else {
							$var($ints, mnew, $new($ints, mprev->length + 1));
							mnew->set(mnew->length - 1, ix);
							for (int32_t k = 0; k < mprev->length; ++k) {
								mnew->set(k, mprev->get(k));
							}
							this->mat->set(i, mnew);
						}
						++i;
					}
				}
				++ix;
			}
		}
	}
}

void ModelStandardIndexedDirector::close() {
}

void ModelStandardIndexedDirector::noteOff(int32_t noteNumber, int32_t velocity) {
	$useLocalObjectStack();
	if (!this->noteOffUsed) {
		return;
	}
	$var($ints, plist, lookupIndex(noteNumber, velocity));
	if (plist == nullptr) {
		return;
	}
	{
		$var($ints, arr$, plist);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				$var($ModelPerformer, p, $nc(this->performers)->get(i));
				if ($nc(p)->isReleaseTriggered()) {
					$nc(this->player)->play(i, nullptr);
				}
			}
		}
	}
}

void ModelStandardIndexedDirector::noteOn(int32_t noteNumber, int32_t velocity) {
	$useLocalObjectStack();
	if (!this->noteOnUsed) {
		return;
	}
	$var($ints, plist, lookupIndex(noteNumber, velocity));
	if (plist == nullptr) {
		return;
	}
	{
		$var($ints, arr$, plist);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				$var($ModelPerformer, p, $nc(this->performers)->get(i));
				if (!$nc(p)->isReleaseTriggered()) {
					$nc(this->player)->play(i, nullptr);
				}
			}
		}
	}
}

ModelStandardIndexedDirector::ModelStandardIndexedDirector() {
}

$Class* ModelStandardIndexedDirector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"performers", "[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PRIVATE | $FINAL, $field(ModelStandardIndexedDirector, performers)},
		{"player", "Lcom/sun/media/sound/ModelDirectedPlayer;", nullptr, $PRIVATE | $FINAL, $field(ModelStandardIndexedDirector, player)},
		{"noteOnUsed", "Z", nullptr, $PRIVATE, $field(ModelStandardIndexedDirector, noteOnUsed)},
		{"noteOffUsed", "Z", nullptr, $PRIVATE, $field(ModelStandardIndexedDirector, noteOffUsed)},
		{"trantables", "[[B", nullptr, $PRIVATE, $field(ModelStandardIndexedDirector, trantables)},
		{"counters", "[I", nullptr, $PRIVATE, $field(ModelStandardIndexedDirector, counters)},
		{"mat", "[[I", nullptr, $PRIVATE, $field(ModelStandardIndexedDirector, mat)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lcom/sun/media/sound/ModelPerformer;Lcom/sun/media/sound/ModelDirectedPlayer;)V", nullptr, $PUBLIC, $method(ModelStandardIndexedDirector, init$, void, $ModelPerformerArray*, $ModelDirectedPlayer*)},
		{"buildindex", "()V", nullptr, $PRIVATE, $method(ModelStandardIndexedDirector, buildindex, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ModelStandardIndexedDirector, close, void)},
		{"lookupIndex", "(II)[I", nullptr, $PRIVATE, $method(ModelStandardIndexedDirector, lookupIndex, $ints*, int32_t, int32_t)},
		{"noteOff", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelStandardIndexedDirector, noteOff, void, int32_t, int32_t)},
		{"noteOn", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelStandardIndexedDirector, noteOn, void, int32_t, int32_t)},
		{"restrict", "(I)I", nullptr, $PRIVATE, $method(ModelStandardIndexedDirector, restrict, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.ModelStandardIndexedDirector",
		"java.lang.Object",
		"com.sun.media.sound.ModelDirector",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModelStandardIndexedDirector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelStandardIndexedDirector);
	});
	return class$;
}

$Class* ModelStandardIndexedDirector::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com