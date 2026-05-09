#include <javax/sound/sampled/spi/MixerProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <jcpp.h>

using $Mixer$InfoArray = $Array<::javax::sound::sampled::Mixer$Info>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;
using $Mixer = ::javax::sound::sampled::Mixer;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class MixerProvider$$Lambda$equals : public $Predicate {
	$class(MixerProvider$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Mixer$Info* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		return $nc(inst$)->equals(obj);
	}
	$Mixer$Info* inst$ = nullptr;
};
$Class* MixerProvider$$Lambda$equals::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MixerProvider$$Lambda$equals, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/Mixer$Info;)V", nullptr, $PUBLIC, $method(MixerProvider$$Lambda$equals, init$, void, $Mixer$Info*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MixerProvider$$Lambda$equals, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.sound.sampled.spi.MixerProvider$$Lambda$equals",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MixerProvider$$Lambda$equals, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MixerProvider$$Lambda$equals);
	});
	return class$;
}
$Class* MixerProvider$$Lambda$equals::class$ = nullptr;

void MixerProvider::init$() {
}

bool MixerProvider::isMixerSupported($Mixer$Info* info) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getMixerInfo())))->anyMatch($$new(MixerProvider$$Lambda$equals, $nc(info)));
}

MixerProvider::MixerProvider() {
}

$Class* MixerProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.sound.sampled.spi.MixerProvider$$Lambda$equals")) {
			return MixerProvider$$Lambda$equals::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(MixerProvider, init$, void)},
		{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MixerProvider, getMixer, $Mixer*, $Mixer$Info*)},
		{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MixerProvider, getMixerInfo, $Mixer$InfoArray*)},
		{"isMixerSupported", "(Ljavax/sound/sampled/Mixer$Info;)Z", nullptr, $PUBLIC, $virtualMethod(MixerProvider, isMixerSupported, bool, $Mixer$Info*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.spi.MixerProvider",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MixerProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MixerProvider);
	});
	return class$;
}

$Class* MixerProvider::class$ = nullptr;

			} // spi
		} // sampled
	} // sound
} // javax