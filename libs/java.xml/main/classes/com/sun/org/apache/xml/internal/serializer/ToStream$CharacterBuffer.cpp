#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$1.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$2.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$3.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$GenericCharacters.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $ToStream$CharacterBuffer$1 = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$1;
using $ToStream$CharacterBuffer$2 = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$2;
using $ToStream$CharacterBuffer$3 = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$3;
using $ToStream$CharacterBuffer$GenericCharacters = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer$GenericCharacters;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

void ToStream$CharacterBuffer::init$($ToStream* this$0) {
	$set(this, this$0, this$0);
	$set(this, bufferedCharacters, $new($ArrayList));
}

void ToStream$CharacterBuffer::addText($chars* chars, int32_t start, int32_t length) {
	$nc(this->bufferedCharacters)->add($$new($ToStream$CharacterBuffer$1, this, chars, start, length));
}

void ToStream$CharacterBuffer::addEntityReference($String* entityName) {
	$nc(this->bufferedCharacters)->add($$new($ToStream$CharacterBuffer$2, this, entityName));
}

void ToStream$CharacterBuffer::addRawText($chars* chars, int32_t start, int32_t length) {
	$nc(this->bufferedCharacters)->add($$new($ToStream$CharacterBuffer$3, this, chars, start, length));
}

bool ToStream$CharacterBuffer::isAnyCharactersBuffered() {
	return $nc(this->bufferedCharacters)->size() > 0;
}

void ToStream$CharacterBuffer::flush(bool skipBeginningNewlines) {
	$useLocalObjectStack();
	$var($Iterator, itr, $nc(this->bufferedCharacters)->iterator());
	bool continueSkipBeginningNewlines = skipBeginningNewlines;
	while ($nc(itr)->hasNext()) {
		$var($ToStream$CharacterBuffer$GenericCharacters, element, $cast($ToStream$CharacterBuffer$GenericCharacters, itr->next()));
		continueSkipBeginningNewlines = $nc(element)->flush(continueSkipBeginningNewlines);
		itr->remove();
	}
}

$chars* ToStream$CharacterBuffer::toChars() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($Iterator, i$, $nc(this->bufferedCharacters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ToStream$CharacterBuffer$GenericCharacters, element, $cast($ToStream$CharacterBuffer$GenericCharacters, i$->next()));
			{
				sb->append($($nc(element)->toChars()));
			}
		}
	}
	return $(sb->toString())->toCharArray();
}

void ToStream$CharacterBuffer::clear() {
	$nc(this->bufferedCharacters)->clear();
}

ToStream$CharacterBuffer::ToStream$CharacterBuffer() {
}

$Class* ToStream$CharacterBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/serializer/ToStream;", nullptr, $FINAL | $SYNTHETIC, $field(ToStream$CharacterBuffer, this$0)},
		{"bufferedCharacters", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer$GenericCharacters;>;", $PRIVATE, $field(ToStream$CharacterBuffer, bufferedCharacters)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToStream;)V", nullptr, $PRIVATE, $method(ToStream$CharacterBuffer, init$, void, $ToStream*)},
		{"addEntityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream$CharacterBuffer, addEntityReference, void, $String*)},
		{"addRawText", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToStream$CharacterBuffer, addRawText, void, $chars*, int32_t, int32_t)},
		{"addText", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToStream$CharacterBuffer, addText, void, $chars*, int32_t, int32_t)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream$CharacterBuffer, clear, void)},
		{"flush", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ToStream$CharacterBuffer, flush, void, bool), "org.xml.sax.SAXException"},
		{"isAnyCharactersBuffered", "()Z", nullptr, $PUBLIC, $virtualMethod(ToStream$CharacterBuffer, isAnyCharactersBuffered, bool)},
		{"toChars", "()[C", nullptr, $PUBLIC, $virtualMethod(ToStream$CharacterBuffer, toChars, $chars*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "com.sun.org.apache.xml.internal.serializer.ToStream", "CharacterBuffer", $PRIVATE},
		{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters", "com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "GenericCharacters", $PRIVATE | $ABSTRACT},
		{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$3", nullptr, nullptr, 0},
		{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$2", nullptr, nullptr, 0},
		{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.serializer.ToStream"
	};
	$loadClass(ToStream$CharacterBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToStream$CharacterBuffer);
	});
	return class$;
}

$Class* ToStream$CharacterBuffer::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com