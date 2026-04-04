#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <jcpp.h>

using $ModelConnectionBlockArray = $Array<::com::sun::media::sound::ModelConnectionBlock>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* ModelDirectedPlayer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"play", "(I[Lcom/sun/media/sound/ModelConnectionBlock;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelDirectedPlayer, play, void, int32_t, $ModelConnectionBlockArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.ModelDirectedPlayer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ModelDirectedPlayer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelDirectedPlayer);
	});
	return class$;
}

$Class* ModelDirectedPlayer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com