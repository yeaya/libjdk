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

$FieldInfo _JPEGImageWriter$CallBackLock$State_FieldInfo_[] = {
	{"Unlocked", "Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JPEGImageWriter$CallBackLock$State, Unlocked)},
	{"Locked", "Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JPEGImageWriter$CallBackLock$State, Locked)},
	{"$VALUES", "[Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JPEGImageWriter$CallBackLock$State, $VALUES)},
	{}
};

$MethodInfo _JPEGImageWriter$CallBackLock$State_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JPEGImageWriter$CallBackLock$State, $values, $JPEGImageWriter$CallBackLock$StateArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(JPEGImageWriter$CallBackLock$State, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(JPEGImageWriter$CallBackLock$State, valueOf, JPEGImageWriter$CallBackLock$State*, $String*)},
	{"values", "()[Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(JPEGImageWriter$CallBackLock$State, values, $JPEGImageWriter$CallBackLock$StateArray*)},
	{}
};

$InnerClassInfo _JPEGImageWriter$CallBackLock$State_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageWriter", "CallBackLock", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock$State", "com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JPEGImageWriter$CallBackLock$State_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock$State",
	"java.lang.Enum",
	nullptr,
	_JPEGImageWriter$CallBackLock$State_FieldInfo_,
	_JPEGImageWriter$CallBackLock$State_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;>;",
	nullptr,
	_JPEGImageWriter$CallBackLock$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter"
};

$Object* allocate$JPEGImageWriter$CallBackLock$State($Class* clazz) {
	return $of($alloc(JPEGImageWriter$CallBackLock$State));
}

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

void clinit$JPEGImageWriter$CallBackLock$State($Class* class$) {
	$assignStatic(JPEGImageWriter$CallBackLock$State::Unlocked, $new(JPEGImageWriter$CallBackLock$State, "Unlocked"_s, 0));
	$assignStatic(JPEGImageWriter$CallBackLock$State::Locked, $new(JPEGImageWriter$CallBackLock$State, "Locked"_s, 1));
	$assignStatic(JPEGImageWriter$CallBackLock$State::$VALUES, JPEGImageWriter$CallBackLock$State::$values());
}

JPEGImageWriter$CallBackLock$State::JPEGImageWriter$CallBackLock$State() {
}

$Class* JPEGImageWriter$CallBackLock$State::load$($String* name, bool initialize) {
	$loadClass(JPEGImageWriter$CallBackLock$State, name, initialize, &_JPEGImageWriter$CallBackLock$State_ClassInfo_, clinit$JPEGImageWriter$CallBackLock$State, allocate$JPEGImageWriter$CallBackLock$State);
	return class$;
}

$Class* JPEGImageWriter$CallBackLock$State::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com