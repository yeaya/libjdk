#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$1.h>

#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$GenericCharacters.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $ToStream$CharacterBuffer = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer;
using $ToStream$CharacterBuffer$GenericCharacters = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$GenericCharacters;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToStream$CharacterBuffer$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$1, this$1)},
	{"val$length", "I", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$1, val$length)},
	{"val$start", "I", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$1, val$start)},
	{"val$chars", "[C", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$1, val$chars)},
	{"text", "[C", nullptr, 0, $field(ToStream$CharacterBuffer$1, text)},
	{}
};

$MethodInfo _ToStream$CharacterBuffer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;[CII)V", nullptr, 0, $method(ToStream$CharacterBuffer$1, init$, void, $ToStream$CharacterBuffer*, $chars*, int32_t, int32_t)},
	{"flush", "(Z)Z", nullptr, 0, $virtualMethod(ToStream$CharacterBuffer$1, flush, bool, bool), "org.xml.sax.SAXException"},
	{"toChars", "()[C", nullptr, 0, $virtualMethod(ToStream$CharacterBuffer$1, toChars, $chars*)},
	{}
};

$EnclosingMethodInfo _ToStream$CharacterBuffer$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer",
	"addText",
	"([CII)V"
};

$InnerClassInfo _ToStream$CharacterBuffer$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "com.sun.org.apache.xml.internal.serializer.ToStream", "CharacterBuffer", $PRIVATE},
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$1", nullptr, nullptr, 0},
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters", "com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "GenericCharacters", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _ToStream$CharacterBuffer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$1",
	"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters",
	nullptr,
	_ToStream$CharacterBuffer$1_FieldInfo_,
	_ToStream$CharacterBuffer$1_MethodInfo_,
	nullptr,
	&_ToStream$CharacterBuffer$1_EnclosingMethodInfo_,
	_ToStream$CharacterBuffer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ToStream"
};

$Object* allocate$ToStream$CharacterBuffer$1($Class* clazz) {
	return $of($alloc(ToStream$CharacterBuffer$1));
}

void ToStream$CharacterBuffer$1::init$($ToStream$CharacterBuffer* this$1, $chars* val$chars, int32_t val$start, int32_t val$length) {
	$set(this, this$1, this$1);
	$set(this, val$chars, val$chars);
	this->val$start = val$start;
	this->val$length = val$length;
	$ToStream$CharacterBuffer$GenericCharacters::init$(this$1);
	{
		$set(this, text, $Arrays::copyOfRange(this->val$chars, this->val$start, this->val$start + this->val$length));
	}
}

bool ToStream$CharacterBuffer$1::flush(bool skipBeginningNewlines) {
	int32_t start = 0;
	while (skipBeginningNewlines && $nc(this->text)->get(start) == u'\n') {
		++start;
		if (start == $nc(this->text)->length) {
			return true;
		}
	}
	$nc(this->this$1->this$0)->outputCharacters(this->text, start, $nc(this->text)->length - start);
	return false;
}

$chars* ToStream$CharacterBuffer$1::toChars() {
	return this->text;
}

ToStream$CharacterBuffer$1::ToStream$CharacterBuffer$1() {
}

$Class* ToStream$CharacterBuffer$1::load$($String* name, bool initialize) {
	$loadClass(ToStream$CharacterBuffer$1, name, initialize, &_ToStream$CharacterBuffer$1_ClassInfo_, allocate$ToStream$CharacterBuffer$1);
	return class$;
}

$Class* ToStream$CharacterBuffer$1::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com