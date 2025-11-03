#include <sun/net/httpserver/SSLStreams$BufType.h>

#include <java/lang/Enum.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

#undef APPLICATION
#undef PACKET

using $SSLStreams$BufTypeArray = $Array<::sun::net::httpserver::SSLStreams$BufType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _SSLStreams$BufType_FieldInfo_[] = {
	{"PACKET", "Lsun/net/httpserver/SSLStreams$BufType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLStreams$BufType, PACKET)},
	{"APPLICATION", "Lsun/net/httpserver/SSLStreams$BufType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLStreams$BufType, APPLICATION)},
	{"$VALUES", "[Lsun/net/httpserver/SSLStreams$BufType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLStreams$BufType, $VALUES)},
	{}
};

$MethodInfo _SSLStreams$BufType_MethodInfo_[] = {
	{"$values", "()[Lsun/net/httpserver/SSLStreams$BufType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SSLStreams$BufTypeArray*(*)()>(&SSLStreams$BufType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(SSLStreams$BufType::*)($String*,int32_t)>(&SSLStreams$BufType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/httpserver/SSLStreams$BufType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLStreams$BufType*(*)($String*)>(&SSLStreams$BufType::valueOf))},
	{"values", "()[Lsun/net/httpserver/SSLStreams$BufType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLStreams$BufTypeArray*(*)()>(&SSLStreams$BufType::values))},
	{}
};

$InnerClassInfo _SSLStreams$BufType_InnerClassesInfo_[] = {
	{"sun.net.httpserver.SSLStreams$BufType", "sun.net.httpserver.SSLStreams", "BufType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SSLStreams$BufType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.net.httpserver.SSLStreams$BufType",
	"java.lang.Enum",
	nullptr,
	_SSLStreams$BufType_FieldInfo_,
	_SSLStreams$BufType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/httpserver/SSLStreams$BufType;>;",
	nullptr,
	_SSLStreams$BufType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.SSLStreams"
};

$Object* allocate$SSLStreams$BufType($Class* clazz) {
	return $of($alloc(SSLStreams$BufType));
}

SSLStreams$BufType* SSLStreams$BufType::PACKET = nullptr;
SSLStreams$BufType* SSLStreams$BufType::APPLICATION = nullptr;
$SSLStreams$BufTypeArray* SSLStreams$BufType::$VALUES = nullptr;

$SSLStreams$BufTypeArray* SSLStreams$BufType::$values() {
	$init(SSLStreams$BufType);
	return $new($SSLStreams$BufTypeArray, {
		SSLStreams$BufType::PACKET,
		SSLStreams$BufType::APPLICATION
	});
}

$SSLStreams$BufTypeArray* SSLStreams$BufType::values() {
	$init(SSLStreams$BufType);
	return $cast($SSLStreams$BufTypeArray, SSLStreams$BufType::$VALUES->clone());
}

SSLStreams$BufType* SSLStreams$BufType::valueOf($String* name) {
	$init(SSLStreams$BufType);
	return $cast(SSLStreams$BufType, $Enum::valueOf(SSLStreams$BufType::class$, name));
}

void SSLStreams$BufType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$SSLStreams$BufType($Class* class$) {
	$assignStatic(SSLStreams$BufType::PACKET, $new(SSLStreams$BufType, "PACKET"_s, 0));
	$assignStatic(SSLStreams$BufType::APPLICATION, $new(SSLStreams$BufType, "APPLICATION"_s, 1));
	$assignStatic(SSLStreams$BufType::$VALUES, SSLStreams$BufType::$values());
}

SSLStreams$BufType::SSLStreams$BufType() {
}

$Class* SSLStreams$BufType::load$($String* name, bool initialize) {
	$loadClass(SSLStreams$BufType, name, initialize, &_SSLStreams$BufType_ClassInfo_, clinit$SSLStreams$BufType, allocate$SSLStreams$BufType);
	return class$;
}

$Class* SSLStreams$BufType::class$ = nullptr;

		} // httpserver
	} // net
} // sun