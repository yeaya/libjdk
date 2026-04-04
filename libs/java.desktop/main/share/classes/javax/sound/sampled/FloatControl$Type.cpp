#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef AUX_RETURN
#undef AUX_SEND
#undef BALANCE
#undef MASTER_GAIN
#undef PAN
#undef REVERB_RETURN
#undef REVERB_SEND
#undef SAMPLE_RATE
#undef VOLUME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

FloatControl$Type* FloatControl$Type::MASTER_GAIN = nullptr;
FloatControl$Type* FloatControl$Type::AUX_SEND = nullptr;
FloatControl$Type* FloatControl$Type::AUX_RETURN = nullptr;
FloatControl$Type* FloatControl$Type::REVERB_SEND = nullptr;
FloatControl$Type* FloatControl$Type::REVERB_RETURN = nullptr;
FloatControl$Type* FloatControl$Type::VOLUME = nullptr;
FloatControl$Type* FloatControl$Type::PAN = nullptr;
FloatControl$Type* FloatControl$Type::BALANCE = nullptr;
FloatControl$Type* FloatControl$Type::SAMPLE_RATE = nullptr;

void FloatControl$Type::init$($String* name) {
	$Control$Type::init$(name);
}

void FloatControl$Type::clinit$($Class* clazz) {
	$assignStatic(FloatControl$Type::MASTER_GAIN, $new(FloatControl$Type, "Master Gain"_s));
	$assignStatic(FloatControl$Type::AUX_SEND, $new(FloatControl$Type, "AUX Send"_s));
	$assignStatic(FloatControl$Type::AUX_RETURN, $new(FloatControl$Type, "AUX Return"_s));
	$assignStatic(FloatControl$Type::REVERB_SEND, $new(FloatControl$Type, "Reverb Send"_s));
	$assignStatic(FloatControl$Type::REVERB_RETURN, $new(FloatControl$Type, "Reverb Return"_s));
	$assignStatic(FloatControl$Type::VOLUME, $new(FloatControl$Type, "Volume"_s));
	$assignStatic(FloatControl$Type::PAN, $new(FloatControl$Type, "Pan"_s));
	$assignStatic(FloatControl$Type::BALANCE, $new(FloatControl$Type, "Balance"_s));
	$assignStatic(FloatControl$Type::SAMPLE_RATE, $new(FloatControl$Type, "Sample Rate"_s));
}

FloatControl$Type::FloatControl$Type() {
}

$Class* FloatControl$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MASTER_GAIN", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, MASTER_GAIN)},
		{"AUX_SEND", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, AUX_SEND)},
		{"AUX_RETURN", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, AUX_RETURN)},
		{"REVERB_SEND", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, REVERB_SEND)},
		{"REVERB_RETURN", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, REVERB_RETURN)},
		{"VOLUME", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, VOLUME)},
		{"PAN", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, PAN)},
		{"BALANCE", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, BALANCE)},
		{"SAMPLE_RATE", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, SAMPLE_RATE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(FloatControl$Type, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.FloatControl$Type", "javax.sound.sampled.FloatControl", "Type", $PUBLIC | $STATIC},
		{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.FloatControl$Type",
		"javax.sound.sampled.Control$Type",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.sampled.FloatControl"
	};
	$loadClass(FloatControl$Type, name, initialize, &classInfo$$, FloatControl$Type::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FloatControl$Type);
	});
	return class$;
}

$Class* FloatControl$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax