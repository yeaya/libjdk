#include <javax/swing/text/WhitespaceBasedBreakIterator.h>

#include <java/lang/Math.h>
#include <java/text/BreakIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/text/StringCharacterIterator.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef DONE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $StringCharacterIterator = ::java::text::StringCharacterIterator;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _WhitespaceBasedBreakIterator_FieldInfo_[] = {
	{"text", "[C", nullptr, $PRIVATE, $field(WhitespaceBasedBreakIterator, text)},
	{"breaks", "[I", nullptr, $PRIVATE, $field(WhitespaceBasedBreakIterator, breaks)},
	{"pos", "I", nullptr, $PRIVATE, $field(WhitespaceBasedBreakIterator, pos)},
	{}
};

$MethodInfo _WhitespaceBasedBreakIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(WhitespaceBasedBreakIterator, init$, void)},
	{"adjacent", "(II)I", nullptr, $PRIVATE, $method(WhitespaceBasedBreakIterator, adjacent, int32_t, int32_t, int32_t)},
	{"checkhit", "(I)I", nullptr, $PRIVATE, $method(WhitespaceBasedBreakIterator, checkhit, int32_t, int32_t)},
	{"current", "()I", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, current, int32_t)},
	{"first", "()I", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, first, int32_t)},
	{"following", "(I)I", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, following, int32_t, int32_t)},
	{"getText", "()Ljava/text/CharacterIterator;", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, getText, $CharacterIterator*)},
	{"last", "()I", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, last, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, next, int32_t)},
	{"next", "(I)I", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, next, int32_t, int32_t)},
	{"preceding", "(I)I", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, preceding, int32_t, int32_t)},
	{"previous", "()I", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, previous, int32_t)},
	{"setText", "(Ljava/text/CharacterIterator;)V", nullptr, $PUBLIC, $virtualMethod(WhitespaceBasedBreakIterator, setText, void, $CharacterIterator*)},
	{}
};

$ClassInfo _WhitespaceBasedBreakIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.WhitespaceBasedBreakIterator",
	"java.text.BreakIterator",
	nullptr,
	_WhitespaceBasedBreakIterator_FieldInfo_,
	_WhitespaceBasedBreakIterator_MethodInfo_
};

$Object* allocate$WhitespaceBasedBreakIterator($Class* clazz) {
	return $of($alloc(WhitespaceBasedBreakIterator));
}

void WhitespaceBasedBreakIterator::init$() {
	$BreakIterator::init$();
	$set(this, text, $new($chars, 0));
	$set(this, breaks, $new($ints, {0}));
	this->pos = 0;
}

void WhitespaceBasedBreakIterator::setText($CharacterIterator* ci) {
	int32_t begin = $nc(ci)->getBeginIndex();
	$set(this, text, $new($chars, ci->getEndIndex() - begin));
	$var($ints, breaks0, $new($ints, $nc(this->text)->length + 1));
	int32_t brIx = 0;
	breaks0->set(brIx++, begin);
	int32_t charIx = 0;
	bool inWs = false;
	for (char16_t c = ci->first(); c != $CharacterIterator::DONE; c = ci->next()) {
		$nc(this->text)->set(charIx, c);
		bool ws = $Character::isWhitespace(c);
		if (inWs && !ws) {
			breaks0->set(brIx++, charIx + begin);
		}
		inWs = ws;
		++charIx;
	}
	if ($nc(this->text)->length > 0) {
		breaks0->set(brIx++, $nc(this->text)->length + begin);
	}
	$System::arraycopy(breaks0, 0, $set(this, breaks, $new($ints, brIx)), 0, brIx);
}

$CharacterIterator* WhitespaceBasedBreakIterator::getText() {
	return $new($StringCharacterIterator, $$new($String, this->text));
}

int32_t WhitespaceBasedBreakIterator::first() {
	return $nc(this->breaks)->get(this->pos = 0);
}

int32_t WhitespaceBasedBreakIterator::last() {
	return $nc(this->breaks)->get(this->pos = $nc(this->breaks)->length - 1);
}

int32_t WhitespaceBasedBreakIterator::current() {
	return $nc(this->breaks)->get(this->pos);
}

int32_t WhitespaceBasedBreakIterator::next() {
	return (this->pos == $nc(this->breaks)->length - 1 ? $BreakIterator::DONE : $nc(this->breaks)->get(++this->pos));
}

int32_t WhitespaceBasedBreakIterator::previous() {
	return (this->pos == 0 ? $BreakIterator::DONE : $nc(this->breaks)->get(--this->pos));
}

int32_t WhitespaceBasedBreakIterator::next(int32_t n) {
	return checkhit(this->pos + n);
}

int32_t WhitespaceBasedBreakIterator::following(int32_t n) {
	return adjacent(n, 1);
}

int32_t WhitespaceBasedBreakIterator::preceding(int32_t n) {
	return adjacent(n, -1);
}

int32_t WhitespaceBasedBreakIterator::checkhit(int32_t hit) {
	if ((hit < 0) || (hit >= $nc(this->breaks)->length)) {
		return $BreakIterator::DONE;
	} else {
		return $nc(this->breaks)->get(this->pos = hit);
	}
}

int32_t WhitespaceBasedBreakIterator::adjacent(int32_t n, int32_t bias) {
	int32_t hit = $Arrays::binarySearch(this->breaks, n);
	int32_t offset = (hit < 0 ? (bias < 0 ? -1 : -2) : 0);
	return checkhit($Math::abs(hit) + bias + offset);
}

WhitespaceBasedBreakIterator::WhitespaceBasedBreakIterator() {
}

$Class* WhitespaceBasedBreakIterator::load$($String* name, bool initialize) {
	$loadClass(WhitespaceBasedBreakIterator, name, initialize, &_WhitespaceBasedBreakIterator_ClassInfo_, allocate$WhitespaceBasedBreakIterator);
	return class$;
}

$Class* WhitespaceBasedBreakIterator::class$ = nullptr;

		} // text
	} // swing
} // javax