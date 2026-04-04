#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$3.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$GenericCharacters.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/util/Arrays.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ToStream$CharacterBuffer = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer;
using $ToStream$CharacterBuffer$GenericCharacters = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$GenericCharacters;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

void ToStream$CharacterBuffer$3::init$($ToStream$CharacterBuffer* this$1, $chars* val$chars, int32_t val$start, int32_t val$length) {
	$set(this, this$1, this$1);
	$set(this, val$chars, val$chars);
	this->val$start = val$start;
	this->val$length = val$length;
	$ToStream$CharacterBuffer$GenericCharacters::init$(this$1);
	{
		$set(this, text, $Arrays::copyOfRange(this->val$chars, this->val$start, this->val$start + this->val$length));
	}
}

bool ToStream$CharacterBuffer$3::flush(bool skipBeginningNewlines) {
	try {
		int32_t start = 0;
		while (skipBeginningNewlines && $nc(this->text)->get(start) == u'\n') {
			++start;
			if (start == this->text->length) {
				return true;
			}
		}
		$nc($nc(this->this$1->this$0)->m_writer)->write(this->text, start, $nc(this->text)->length - start);
		this->this$1->this$0->m_isprevtext = true;
	} catch ($IOException& e) {
		$throwNew($SAXException, e);
	}
	return false;
}

$chars* ToStream$CharacterBuffer$3::toChars() {
	return this->text;
}

ToStream$CharacterBuffer$3::ToStream$CharacterBuffer$3() {
}

$Class* ToStream$CharacterBuffer$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$3, this$1)},
		{"val$length", "I", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$3, val$length)},
		{"val$start", "I", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$3, val$start)},
		{"val$chars", "[C", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer$3, val$chars)},
		{"text", "[C", nullptr, 0, $field(ToStream$CharacterBuffer$3, text)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;[CII)V", nullptr, 0, $method(ToStream$CharacterBuffer$3, init$, void, $ToStream$CharacterBuffer*, $chars*, int32_t, int32_t)},
		{"flush", "(Z)Z", nullptr, 0, $virtualMethod(ToStream$CharacterBuffer$3, flush, bool, bool), "org.xml.sax.SAXException"},
		{"toChars", "()[C", nullptr, 0, $virtualMethod(ToStream$CharacterBuffer$3, toChars, $chars*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer",
		"addRawText",
		"([CII)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "com.sun.org.apache.xml.internal.serializer.ToStream", "CharacterBuffer", $PRIVATE},
		{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$3", nullptr, nullptr, 0},
		{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters", "com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "GenericCharacters", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$3",
		"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.serializer.ToStream"
	};
	$loadClass(ToStream$CharacterBuffer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToStream$CharacterBuffer$3);
	});
	return class$;
}

$Class* ToStream$CharacterBuffer$3::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com