#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$UnparsedEntity.h>

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

$FieldInfo _XIncludeHandler$UnparsedEntity_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$UnparsedEntity, name)},
	{"systemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$UnparsedEntity, systemId)},
	{"baseURI", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$UnparsedEntity, baseURI)},
	{"publicId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$UnparsedEntity, publicId)},
	{"expandedSystemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$UnparsedEntity, expandedSystemId)},
	{"notation", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XIncludeHandler$UnparsedEntity, notation)},
	{"augmentations", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC, $field(XIncludeHandler$UnparsedEntity, augmentations)},
	{}
};

$MethodInfo _XIncludeHandler$UnparsedEntity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(XIncludeHandler$UnparsedEntity, init$, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler$UnparsedEntity, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler$UnparsedEntity, hashCode, int32_t)},
	{"isDuplicate", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XIncludeHandler$UnparsedEntity, isDuplicate, bool, Object$*)},
	{}
};

$InnerClassInfo _XIncludeHandler$UnparsedEntity_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$UnparsedEntity", "com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler", "UnparsedEntity", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _XIncludeHandler$UnparsedEntity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler$UnparsedEntity",
	"java.lang.Object",
	nullptr,
	_XIncludeHandler$UnparsedEntity_FieldInfo_,
	_XIncludeHandler$UnparsedEntity_MethodInfo_,
	nullptr,
	nullptr,
	_XIncludeHandler$UnparsedEntity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler"
};

$Object* allocate$XIncludeHandler$UnparsedEntity($Class* clazz) {
	return $of($alloc(XIncludeHandler$UnparsedEntity));
}

void XIncludeHandler$UnparsedEntity::init$() {
}

bool XIncludeHandler$UnparsedEntity::equals(Object$* obj) {
	return $equals(obj, this) || $instanceOf(XIncludeHandler$UnparsedEntity, obj) && $Objects::equals(this->name, $nc(($cast(XIncludeHandler$UnparsedEntity, obj)))->name);
}

int32_t XIncludeHandler$UnparsedEntity::hashCode() {
	return $Objects::hashCode(this->name);
}

bool XIncludeHandler$UnparsedEntity::isDuplicate(Object$* obj) {
	if (obj != nullptr && $instanceOf(XIncludeHandler$UnparsedEntity, obj)) {
		$var(XIncludeHandler$UnparsedEntity, other, $cast(XIncludeHandler$UnparsedEntity, obj));
		bool var$2 = $Objects::equals(this->name, other->name);
		bool var$1 = var$2 && $Objects::equals(this->publicId, other->publicId);
		bool var$0 = var$1 && $Objects::equals(this->expandedSystemId, other->expandedSystemId);
		return var$0 && $Objects::equals(this->notation, other->notation);
	}
	return false;
}

XIncludeHandler$UnparsedEntity::XIncludeHandler$UnparsedEntity() {
}

$Class* XIncludeHandler$UnparsedEntity::load$($String* name, bool initialize) {
	$loadClass(XIncludeHandler$UnparsedEntity, name, initialize, &_XIncludeHandler$UnparsedEntity_ClassInfo_, allocate$XIncludeHandler$UnparsedEntity);
	return class$;
}

$Class* XIncludeHandler$UnparsedEntity::class$ = nullptr;

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com