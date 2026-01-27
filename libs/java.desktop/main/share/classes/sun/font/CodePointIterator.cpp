#include <sun/font/CodePointIterator.h>

#include <java/lang/CharSequence.h>
#include <java/text/CharacterIterator.h>
#include <sun/font/CharArrayCodePointIterator.h>
#include <sun/font/CharSequenceCodePointIterator.h>
#include <sun/font/CharacterIteratorCodePointIterator.h>
#include <jcpp.h>

#undef DONE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;
using $CharArrayCodePointIterator = ::sun::font::CharArrayCodePointIterator;
using $CharSequenceCodePointIterator = ::sun::font::CharSequenceCodePointIterator;
using $CharacterIteratorCodePointIterator = ::sun::font::CharacterIteratorCodePointIterator;

namespace sun {
	namespace font {

$FieldInfo _CodePointIterator_FieldInfo_[] = {
	{"DONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CodePointIterator, DONE)},
	{}
};

$MethodInfo _CodePointIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CodePointIterator, init$, void)},
	{"charIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CodePointIterator, charIndex, int32_t)},
	{"create", "([C)Lsun/font/CodePointIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointIterator, create, CodePointIterator*, $chars*)},
	{"create", "([CII)Lsun/font/CodePointIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointIterator, create, CodePointIterator*, $chars*, int32_t, int32_t)},
	{"create", "(Ljava/lang/CharSequence;)Lsun/font/CodePointIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointIterator, create, CodePointIterator*, $CharSequence*)},
	{"create", "(Ljava/text/CharacterIterator;)Lsun/font/CodePointIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointIterator, create, CodePointIterator*, $CharacterIterator*)},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CodePointIterator, next, int32_t)},
	{"prev", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CodePointIterator, prev, int32_t)},
	{"setToLimit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CodePointIterator, setToLimit, void)},
	{"setToStart", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CodePointIterator, setToStart, void)},
	{}
};

$ClassInfo _CodePointIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.CodePointIterator",
	"java.lang.Object",
	nullptr,
	_CodePointIterator_FieldInfo_,
	_CodePointIterator_MethodInfo_
};

$Object* allocate$CodePointIterator($Class* clazz) {
	return $of($alloc(CodePointIterator));
}

void CodePointIterator::init$() {
}

CodePointIterator* CodePointIterator::create($chars* text) {
	return $new($CharArrayCodePointIterator, text);
}

CodePointIterator* CodePointIterator::create($chars* text, int32_t start, int32_t limit) {
	return $new($CharArrayCodePointIterator, text, start, limit);
}

CodePointIterator* CodePointIterator::create($CharSequence* text) {
	return $new($CharSequenceCodePointIterator, text);
}

CodePointIterator* CodePointIterator::create($CharacterIterator* iter) {
	return $new($CharacterIteratorCodePointIterator, iter);
}

CodePointIterator::CodePointIterator() {
}

$Class* CodePointIterator::load$($String* name, bool initialize) {
	$loadClass(CodePointIterator, name, initialize, &_CodePointIterator_ClassInfo_, allocate$CodePointIterator);
	return class$;
}

$Class* CodePointIterator::class$ = nullptr;

	} // font
} // sun