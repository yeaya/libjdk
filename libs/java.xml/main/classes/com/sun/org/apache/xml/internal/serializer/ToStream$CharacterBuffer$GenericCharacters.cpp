#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$GenericCharacters.h>

#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer.h>
#include <jcpp.h>

using $ToStream$CharacterBuffer = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToStream$CharacterBuffer$GenericCharacters_FieldInfo_[] = {
	{"this$1", "Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$GenericCharacters, this$1)},
	{}
};

$MethodInfo _ToStream$CharacterBuffer$GenericCharacters_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;)V", nullptr, $PRIVATE, $method(ToStream$CharacterBuffer$GenericCharacters, init$, void, $ToStream$CharacterBuffer*)},
	{"flush", "(Z)Z", nullptr, $ABSTRACT, $virtualMethod(ToStream$CharacterBuffer$GenericCharacters, flush, bool, bool), "org.xml.sax.SAXException"},
	{"toChars", "()[C", nullptr, $ABSTRACT, $virtualMethod(ToStream$CharacterBuffer$GenericCharacters, toChars, $chars*)},
	{}
};

$InnerClassInfo _ToStream$CharacterBuffer$GenericCharacters_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "com.sun.org.apache.xml.internal.serializer.ToStream", "CharacterBuffer", $PRIVATE},
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters", "com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "GenericCharacters", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _ToStream$CharacterBuffer$GenericCharacters_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters",
	"java.lang.Object",
	nullptr,
	_ToStream$CharacterBuffer$GenericCharacters_FieldInfo_,
	_ToStream$CharacterBuffer$GenericCharacters_MethodInfo_,
	nullptr,
	nullptr,
	_ToStream$CharacterBuffer$GenericCharacters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ToStream"
};

$Object* allocate$ToStream$CharacterBuffer$GenericCharacters($Class* clazz) {
	return $of($alloc(ToStream$CharacterBuffer$GenericCharacters));
}

void ToStream$CharacterBuffer$GenericCharacters::init$($ToStream$CharacterBuffer* this$1) {
	$set(this, this$1, this$1);
}

ToStream$CharacterBuffer$GenericCharacters::ToStream$CharacterBuffer$GenericCharacters() {
}

$Class* ToStream$CharacterBuffer$GenericCharacters::load$($String* name, bool initialize) {
	$loadClass(ToStream$CharacterBuffer$GenericCharacters, name, initialize, &_ToStream$CharacterBuffer$GenericCharacters_ClassInfo_, allocate$ToStream$CharacterBuffer$GenericCharacters);
	return class$;
}

$Class* ToStream$CharacterBuffer$GenericCharacters::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com