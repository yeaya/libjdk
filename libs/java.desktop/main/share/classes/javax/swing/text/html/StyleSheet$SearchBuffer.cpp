#include <javax/swing/text/html/StyleSheet$SearchBuffer.h>
#include <java/lang/StringBuffer.h>
#include <java/util/EmptyStackException.h>
#include <java/util/Hashtable.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $EmptyStackException = ::java::util::EmptyStackException;
using $Hashtable = ::java::util::Hashtable;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$Stack* StyleSheet$SearchBuffer::searchBuffers = nullptr;

void StyleSheet$SearchBuffer::init$() {
	$set(this, vector, nullptr);
	$set(this, stringBuffer, nullptr);
	$set(this, hashtable, nullptr);
}

StyleSheet$SearchBuffer* StyleSheet$SearchBuffer::obtainSearchBuffer() {
	$init(StyleSheet$SearchBuffer);
	$var(StyleSheet$SearchBuffer, sb, nullptr);
	try {
		if (!$nc(StyleSheet$SearchBuffer::searchBuffers)->empty()) {
			$assign(sb, $cast(StyleSheet$SearchBuffer, StyleSheet$SearchBuffer::searchBuffers->pop()));
		} else {
			$assign(sb, $new(StyleSheet$SearchBuffer));
		}
	} catch ($EmptyStackException& ese) {
		$assign(sb, $new(StyleSheet$SearchBuffer));
	}
	return sb;
}

void StyleSheet$SearchBuffer::releaseSearchBuffer(StyleSheet$SearchBuffer* sb) {
	$init(StyleSheet$SearchBuffer);
	$nc(sb)->empty();
	$nc(StyleSheet$SearchBuffer::searchBuffers)->push(sb);
}

$StringBuffer* StyleSheet$SearchBuffer::getStringBuffer() {
	if (this->stringBuffer == nullptr) {
		$set(this, stringBuffer, $new($StringBuffer));
	}
	return this->stringBuffer;
}

$Vector* StyleSheet$SearchBuffer::getVector() {
	if (this->vector == nullptr) {
		$set(this, vector, $new($Vector));
	}
	return this->vector;
}

$Hashtable* StyleSheet$SearchBuffer::getHashtable() {
	if (this->hashtable == nullptr) {
		$set(this, hashtable, $new($Hashtable));
	}
	return this->hashtable;
}

void StyleSheet$SearchBuffer::empty() {
	if (this->stringBuffer != nullptr) {
		this->stringBuffer->setLength(0);
	}
	if (this->vector != nullptr) {
		this->vector->removeAllElements();
	}
	if (this->hashtable != nullptr) {
		this->hashtable->clear();
	}
}

void StyleSheet$SearchBuffer::clinit$($Class* clazz) {
	$assignStatic(StyleSheet$SearchBuffer::searchBuffers, $new($Stack));
}

StyleSheet$SearchBuffer::StyleSheet$SearchBuffer() {
}

$Class* StyleSheet$SearchBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"searchBuffers", "Ljava/util/Stack;", "Ljava/util/Stack<Ljavax/swing/text/html/StyleSheet$SearchBuffer;>;", $STATIC, $staticField(StyleSheet$SearchBuffer, searchBuffers)},
		{"vector", "Ljava/util/Vector;", nullptr, 0, $field(StyleSheet$SearchBuffer, vector)},
		{"stringBuffer", "Ljava/lang/StringBuffer;", nullptr, 0, $field(StyleSheet$SearchBuffer, stringBuffer)},
		{"hashtable", "Ljava/util/Hashtable;", nullptr, 0, $field(StyleSheet$SearchBuffer, hashtable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StyleSheet$SearchBuffer, init$, void)},
		{"empty", "()V", nullptr, 0, $virtualMethod(StyleSheet$SearchBuffer, empty, void)},
		{"getHashtable", "()Ljava/util/Hashtable;", nullptr, 0, $virtualMethod(StyleSheet$SearchBuffer, getHashtable, $Hashtable*)},
		{"getStringBuffer", "()Ljava/lang/StringBuffer;", nullptr, 0, $virtualMethod(StyleSheet$SearchBuffer, getStringBuffer, $StringBuffer*)},
		{"getVector", "()Ljava/util/Vector;", nullptr, 0, $virtualMethod(StyleSheet$SearchBuffer, getVector, $Vector*)},
		{"obtainSearchBuffer", "()Ljavax/swing/text/html/StyleSheet$SearchBuffer;", nullptr, $STATIC, $staticMethod(StyleSheet$SearchBuffer, obtainSearchBuffer, StyleSheet$SearchBuffer*)},
		{"releaseSearchBuffer", "(Ljavax/swing/text/html/StyleSheet$SearchBuffer;)V", nullptr, $STATIC, $staticMethod(StyleSheet$SearchBuffer, releaseSearchBuffer, void, StyleSheet$SearchBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.StyleSheet$SearchBuffer", "javax.swing.text.html.StyleSheet", "SearchBuffer", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.StyleSheet$SearchBuffer",
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
		"javax.swing.text.html.StyleSheet"
	};
	$loadClass(StyleSheet$SearchBuffer, name, initialize, &classInfo$$, StyleSheet$SearchBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StyleSheet$SearchBuffer);
	});
	return class$;
}

$Class* StyleSheet$SearchBuffer::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax