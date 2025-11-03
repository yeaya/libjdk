#include <sun/nio/cs/ext/SJIS_0213$Holder.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/nio/cs/CharsetMapping.h>
#include <sun/nio/cs/ext/SJIS_0213$Holder$1.h>
#include <sun/nio/cs/ext/SJIS_0213.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $CharsetMapping = ::sun::nio::cs::CharsetMapping;
using $SJIS_0213 = ::sun::nio::cs::ext::SJIS_0213;
using $SJIS_0213$Holder$1 = ::sun::nio::cs::ext::SJIS_0213$Holder$1;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _SJIS_0213$Holder_FieldInfo_[] = {
	{"mapping", "Lsun/nio/cs/CharsetMapping;", nullptr, $STATIC | $FINAL, $staticField(SJIS_0213$Holder, mapping)},
	{}
};

$MethodInfo _SJIS_0213$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SJIS_0213$Holder::*)()>(&SJIS_0213$Holder::init$))},
	{}
};

$InnerClassInfo _SJIS_0213$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.SJIS_0213$Holder", "sun.nio.cs.ext.SJIS_0213", "Holder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.SJIS_0213$Holder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SJIS_0213$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.SJIS_0213$Holder",
	"java.lang.Object",
	nullptr,
	_SJIS_0213$Holder_FieldInfo_,
	_SJIS_0213$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_SJIS_0213$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.SJIS_0213"
};

$Object* allocate$SJIS_0213$Holder($Class* clazz) {
	return $of($alloc(SJIS_0213$Holder));
}

$CharsetMapping* SJIS_0213$Holder::mapping = nullptr;

void SJIS_0213$Holder::init$() {
}

void clinit$SJIS_0213$Holder($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(SJIS_0213$Holder::mapping, $cast($CharsetMapping, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SJIS_0213$Holder$1)))));
}

SJIS_0213$Holder::SJIS_0213$Holder() {
}

$Class* SJIS_0213$Holder::load$($String* name, bool initialize) {
	$loadClass(SJIS_0213$Holder, name, initialize, &_SJIS_0213$Holder_ClassInfo_, clinit$SJIS_0213$Holder, allocate$SJIS_0213$Holder);
	return class$;
}

$Class* SJIS_0213$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun