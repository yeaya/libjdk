#include <sun/nio/cs/ext/ISO2022_KR$Holder.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/ext/EUC_KR.h>
#include <sun/nio/cs/ext/ISO2022_KR.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $EUC_KR = ::sun::nio::cs::ext::EUC_KR;
using $ISO2022_KR = ::sun::nio::cs::ext::ISO2022_KR;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_KR$Holder_FieldInfo_[] = {
	{"ksc5601_cs", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_KR$Holder, ksc5601_cs)},
	{}
};

$MethodInfo _ISO2022_KR$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ISO2022_KR$Holder::*)()>(&ISO2022_KR$Holder::init$))},
	{}
};

$InnerClassInfo _ISO2022_KR$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_KR$Holder", "sun.nio.cs.ext.ISO2022_KR", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO2022_KR$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_KR$Holder",
	"java.lang.Object",
	nullptr,
	_ISO2022_KR$Holder_FieldInfo_,
	_ISO2022_KR$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_KR$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_KR"
};

$Object* allocate$ISO2022_KR$Holder($Class* clazz) {
	return $of($alloc(ISO2022_KR$Holder));
}

$Charset* ISO2022_KR$Holder::ksc5601_cs = nullptr;

void ISO2022_KR$Holder::init$() {
}

void clinit$ISO2022_KR$Holder($Class* class$) {
	$assignStatic(ISO2022_KR$Holder::ksc5601_cs, $new($EUC_KR));
}

ISO2022_KR$Holder::ISO2022_KR$Holder() {
}

$Class* ISO2022_KR$Holder::load$($String* name, bool initialize) {
	$loadClass(ISO2022_KR$Holder, name, initialize, &_ISO2022_KR$Holder_ClassInfo_, clinit$ISO2022_KR$Holder, allocate$ISO2022_KR$Holder);
	return class$;
}

$Class* ISO2022_KR$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun