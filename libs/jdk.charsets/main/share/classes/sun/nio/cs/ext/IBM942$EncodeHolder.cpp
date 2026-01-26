#include <sun/nio/cs/ext/IBM942$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM942$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM942.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM942$DecodeHolder = ::sun::nio::cs::ext::IBM942$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM942$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM942$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IBM942$EncodeHolder, init$, void)},
	{}
};

$InnerClassInfo _IBM942$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM942$EncodeHolder", "sun.nio.cs.ext.IBM942", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM942$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM942$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM942$EncodeHolder_FieldInfo_,
	_IBM942$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM942$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM942"
};

$Object* allocate$IBM942$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM942$EncodeHolder));
}

$chars* IBM942$EncodeHolder::c2b = nullptr;
$chars* IBM942$EncodeHolder::c2bIndex = nullptr;

void IBM942$EncodeHolder::init$() {
}

void clinit$IBM942$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM942$EncodeHolder::c2b, $new($chars, 27136));
	$assignStatic(IBM942$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"郤唞鏀洀釋漞讠烿袠蝁繁辑誚鋊腜―腠～腡∥腼－袠啞見焰覨鷗誚嚙讠俠诫軀豱繫豴荆貲鹼趍麴跲栅軆屢轊繡迓蔣违醬郤蟬酾搔醉瘦釋驒鉜簞鋍摑鍕塡鍞顚鎘禱鏀瀆鑘囊钍剝钬潑钮醱陪頰雋麵鞉萊願蠟鮠屛鶷攢麔梎\ue379繈\ue445腁\ue8f6頹突￤繁\uf86f"_s);
		$init($IBM942$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM942$DecodeHolder::b2cStr, $IBM942$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 252, IBM942$EncodeHolder::c2b, IBM942$EncodeHolder::c2bIndex);
	}
}

IBM942$EncodeHolder::IBM942$EncodeHolder() {
}

$Class* IBM942$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM942$EncodeHolder, name, initialize, &_IBM942$EncodeHolder_ClassInfo_, clinit$IBM942$EncodeHolder, allocate$IBM942$EncodeHolder);
	return class$;
}

$Class* IBM942$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun