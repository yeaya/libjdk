#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <jcpp.h>

using $Line$InfoArray = $Array<::javax::sound::sampled::Line$Info>;
using $LineArray = $Array<::javax::sound::sampled::Line>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;

namespace javax {
	namespace sound {
		namespace sampled {

$Class* Mixer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLine", "(Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getLine, $Line*, $Line$Info*), "javax.sound.sampled.LineUnavailableException"},
		{"getMaxLines", "(Ljavax/sound/sampled/Line$Info;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getMaxLines, int32_t, $Line$Info*)},
		{"getMixerInfo", "()Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getMixerInfo, $Mixer$Info*)},
		{"getSourceLineInfo", "()[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getSourceLineInfo, $Line$InfoArray*)},
		{"getSourceLineInfo", "(Ljavax/sound/sampled/Line$Info;)[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getSourceLineInfo, $Line$InfoArray*, $Line$Info*)},
		{"getSourceLines", "()[Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getSourceLines, $LineArray*)},
		{"getTargetLineInfo", "()[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getTargetLineInfo, $Line$InfoArray*)},
		{"getTargetLineInfo", "(Ljavax/sound/sampled/Line$Info;)[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getTargetLineInfo, $Line$InfoArray*, $Line$Info*)},
		{"getTargetLines", "()[Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, getTargetLines, $LineArray*)},
		{"isLineSupported", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, isLineSupported, bool, $Line$Info*)},
		{"isSynchronizationSupported", "([Ljavax/sound/sampled/Line;Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, isSynchronizationSupported, bool, $LineArray*, bool)},
		{"synchronize", "([Ljavax/sound/sampled/Line;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, synchronize, void, $LineArray*, bool)},
		{"unsynchronize", "([Ljavax/sound/sampled/Line;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Mixer, unsynchronize, void, $LineArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.Mixer$Info", "javax.sound.sampled.Mixer", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.sampled.Mixer",
		nullptr,
		"javax.sound.sampled.Line",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.Mixer$Info"
	};
	$loadClass(Mixer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Mixer);
	});
	return class$;
}

$Class* Mixer::class$ = nullptr;

		} // sampled
	} // sound
} // javax