#include <sun/nio/cs/ext/IBM933$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM933$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM933.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM933 = ::sun::nio::cs::ext::IBM933;
using $IBM933$DecodeHolder = ::sun::nio::cs::ext::IBM933$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM933$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM933$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM933$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM933$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM933$EncodeHolder::*)()>(&IBM933$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM933$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM933$EncodeHolder", "sun.nio.cs.ext.IBM933", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM933$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM933$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM933$EncodeHolder_FieldInfo_,
	_IBM933$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM933$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM933"
};

$Object* allocate$IBM933$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM933$EncodeHolder));
}

$chars* IBM933$EncodeHolder::c2b = nullptr;
$chars* IBM933$EncodeHolder::c2bIndex = nullptr;

void IBM933$EncodeHolder::init$() {
}

void clinit$IBM933$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM933$EncodeHolder::c2b, $new($chars, 0x00009B00));
	$assignStatic(IBM933$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\u0015\u0085"_s);
		$init($IBM933$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM933$DecodeHolder::b2cStr, $IBM933$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM933$EncodeHolder::c2b, IBM933$EncodeHolder::c2bIndex);
	}
}

IBM933$EncodeHolder::IBM933$EncodeHolder() {
}

$Class* IBM933$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM933$EncodeHolder, name, initialize, &_IBM933$EncodeHolder_ClassInfo_, clinit$IBM933$EncodeHolder, allocate$IBM933$EncodeHolder);
	return class$;
}

$Class* IBM933$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun