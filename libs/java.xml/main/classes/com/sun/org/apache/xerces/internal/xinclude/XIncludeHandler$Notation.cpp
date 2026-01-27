#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$Notation.h>

#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

$FieldInfo _XIncludeHandler$Notation_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$Notation, name)},
	{"systemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$Notation, systemId)},
	{"baseURI", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$Notation, baseURI)},
	{"publicId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$Notation, publicId)},
	{"expandedSystemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$Notation, expandedSystemId)},
	{"augmentations", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC, $field(XIncludeHandler$Notation, augmentations)},
	{}
};

$MethodInfo _XIncludeHandler$Notation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(XIncludeHandler$Notation, init$, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler$Notation, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler$Notation, hashCode, int32_t)},
	{"isDuplicate", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler$Notation, isDuplicate, bool, Object$*)},
	{}
};

$InnerClassInfo _XIncludeHandler$Notation_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$Notation", "com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler", "Notation", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _XIncludeHandler$Notation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$Notation",
	"java.lang.Object",
	nullptr,
	_XIncludeHandler$Notation_FieldInfo_,
	_XIncludeHandler$Notation_MethodInfo_,
	nullptr,
	nullptr,
	_XIncludeHandler$Notation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler"
};

$Object* allocate$XIncludeHandler$Notation($Class* clazz) {
	return $of($alloc(XIncludeHandler$Notation));
}

void XIncludeHandler$Notation::init$() {
}

bool XIncludeHandler$Notation::equals(Object$* obj) {
	return $equals(obj, this) || $instanceOf(XIncludeHandler$Notation, obj) && $Objects::equals(this->name, $nc(($cast(XIncludeHandler$Notation, obj)))->name);
}

int32_t XIncludeHandler$Notation::hashCode() {
	return $Objects::hashCode(this->name);
}

bool XIncludeHandler$Notation::isDuplicate(Object$* obj) {
	if (obj != nullptr && $instanceOf(XIncludeHandler$Notation, obj)) {
		$var(XIncludeHandler$Notation, other, $cast(XIncludeHandler$Notation, obj));
		bool var$1 = $Objects::equals(this->name, other->name);
		bool var$0 = var$1 && $Objects::equals(this->publicId, other->publicId);
		return var$0 && $Objects::equals(this->expandedSystemId, other->expandedSystemId);
	}
	return false;
}

XIncludeHandler$Notation::XIncludeHandler$Notation() {
}

$Class* XIncludeHandler$Notation::load$($String* name, bool initialize) {
	$loadClass(XIncludeHandler$Notation, name, initialize, &_XIncludeHandler$Notation_ClassInfo_, allocate$XIncludeHandler$Notation);
	return class$;
}

$Class* XIncludeHandler$Notation::class$ = nullptr;

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com