#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

using $JPEGImageWriter$CallBackLock$StateArray = $Array<::com::sun::imageio::plugins::jpeg::JPEGImageWriter$CallBackLock$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

JPEGImageWriter$CallBackLock$State* JPEGImageWriter$CallBackLock$State::Unlocked = nullptr;
JPEGImageWriter$CallBackLock$State* JPEGImageWriter$CallBackLock$State::Locked = nullptr;
$JPEGImageWriter$CallBackLock$StateArray* JPEGImageWriter$CallBackLock$State::$VALUES = nullptr;

$JPEGImageWriter$CallBackLock$StateArray* JPEGImageWriter$CallBackLock$State::$values() {
	$init(JPEGImageWriter$CallBackLock$State);
	return $new($JPEGImageWriter$CallBackLock$StateArray, {
		JPEGImageWriter$CallBackLock$State::Unlocked,
		JPEGImageWriter$CallBackLock$State::Locked
	});
}

$JPEGImageWriter$CallBackLock$StateArray* JPEGImageWriter$CallBackLock$State::values() {
	$init(JPEGImageWriter$CallBackLock$State);
	return $cast($JPEGImageWriter$CallBackLock$StateArray, JPEGImageWriter$CallBackLock$State::$VALUES->clone());
}

JPEGImageWriter$CallBackLock$State* JPEGImageWriter$CallBackLock$State::valueOf($String* name) {
	$init(JPEGImageWriter$CallBackLock$State);
	return $cast(JPEGImageWriter$CallBackLock$State, $Enum::valueOf(JPEGImageWriter$CallBackLock$State::class$, name));
}

void JPEGImageWriter$CallBackLock$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void JPEGImageWriter$CallBackLock$State::clinit$($Class* clazz) {
	$assignStatic(JPEGImageWriter$CallBackLock$State::Unlocked, $new(JPEGImageWriter$CallBackLock$State, "Unlocked"_s, 0));
	$assignStatic(JPEGImageWriter$CallBackLock$State::Locked, $new(JPEGImageWriter$CallBackLock$State, "Locked"_s, 1));
	$assignStatic(JPEGImageWriter$CallBackLock$State::$VALUES, JPEGImageWriter$CallBackLock$State::$values());
}

JPEGImageWriter$CallBackLock$State::JPEGImageWriter$CallBackLock$State() {
}

$Class* JPEGImageWriter$CallBackLock$State::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"Unlocked", "Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JPEGImageWriter$CallBackLock$State, Unlocked)},
		{"Locked", "Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JPEGImageWriter$CallBackLock$State, Locked)},
		{"$VALUES", "[Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JPEGImageWriter$CallBackLock$State, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JPEGImageWriter$CallBackLock$State, $values, $JPEGImageWriter$CallBackLock$StateArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(JPEGImageWriter$CallBackLock$State, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(JPEGImageWriter$CallBackLock$State, valueOf, JPEGImageWriter$CallBackLock$State*, $String*)},
		{"values", "()[Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(JPEGImageWriter$CallBackLock$State, values, $JPEGImageWriter$CallBackLock$StateArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageWriter", "CallBackLock", $PRIVATE | $STATIC},
		{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock$State", "com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock$State",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter"
	};
	$loadClass(JPEGImageWriter$CallBackLock$State, name, initialize, &classInfo$$, JPEGImageWriter$CallBackLock$State::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JPEGImageWriter$CallBackLock$State));
	});
	return class$;
}

$Class* JPEGImageWriter$CallBackLock$State::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com