#include <sun/nio/cs/ext/SJIS_0213$Holder$1.h>

#include <java/io/InputStream.h>
#include <sun/nio/cs/CharsetMapping.h>
#include <sun/nio/cs/ext/SJIS_0213.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $CharsetMapping = ::sun::nio::cs::CharsetMapping;
using $SJIS_0213 = ::sun::nio::cs::ext::SJIS_0213;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _SJIS_0213$Holder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SJIS_0213$Holder$1::*)()>(&SJIS_0213$Holder$1::init$))},
	{"run", "()Lsun/nio/cs/CharsetMapping;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SJIS_0213$Holder$1_EnclosingMethodInfo_ = {
	"sun.nio.cs.ext.SJIS_0213$Holder",
	nullptr,
	nullptr
};

$InnerClassInfo _SJIS_0213$Holder$1_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.SJIS_0213$Holder", "sun.nio.cs.ext.SJIS_0213", "Holder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.SJIS_0213$Holder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SJIS_0213$Holder$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.SJIS_0213$Holder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SJIS_0213$Holder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/nio/cs/CharsetMapping;>;",
	&_SJIS_0213$Holder$1_EnclosingMethodInfo_,
	_SJIS_0213$Holder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.SJIS_0213"
};

$Object* allocate$SJIS_0213$Holder$1($Class* clazz) {
	return $of($alloc(SJIS_0213$Holder$1));
}

void SJIS_0213$Holder$1::init$() {
}

$Object* SJIS_0213$Holder$1::run() {
	$beforeCallerSensitive();
	$load($SJIS_0213);
	return $of($CharsetMapping::get($($SJIS_0213::class$->getResourceAsStream("sjis0213.dat"_s))));
}

SJIS_0213$Holder$1::SJIS_0213$Holder$1() {
}

$Class* SJIS_0213$Holder$1::load$($String* name, bool initialize) {
	$loadClass(SJIS_0213$Holder$1, name, initialize, &_SJIS_0213$Holder$1_ClassInfo_, allocate$SJIS_0213$Holder$1);
	return class$;
}

$Class* SJIS_0213$Holder$1::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun