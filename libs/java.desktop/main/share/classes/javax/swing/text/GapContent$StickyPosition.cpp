#include <javax/swing/text/GapContent$StickyPosition.h>
#include <javax/swing/text/GapContent$MarkData.h>
#include <javax/swing/text/GapContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $GapContent = ::javax::swing::text::GapContent;
using $GapContent$MarkData = ::javax::swing::text::GapContent$MarkData;

namespace javax {
	namespace swing {
		namespace text {

void GapContent$StickyPosition::init$($GapContent* this$0) {
	$set(this, this$0, this$0);
}

void GapContent$StickyPosition::setMark($GapContent$MarkData* mark) {
	$set(this, mark, mark);
}

int32_t GapContent$StickyPosition::getOffset() {
	return $nc(this->mark)->getOffset();
}

$String* GapContent$StickyPosition::toString() {
	return $Integer::toString(getOffset());
}

GapContent$StickyPosition::GapContent$StickyPosition() {
}

$Class* GapContent$StickyPosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/GapContent;", nullptr, $FINAL | $SYNTHETIC, $field(GapContent$StickyPosition, this$0)},
		{"mark", "Ljavax/swing/text/GapContent$MarkData;", nullptr, 0, $field(GapContent$StickyPosition, mark)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/GapContent;)V", nullptr, 0, $method(GapContent$StickyPosition, init$, void, $GapContent*)},
		{"getOffset", "()I", nullptr, $PUBLIC, $virtualMethod(GapContent$StickyPosition, getOffset, int32_t)},
		{"setMark", "(Ljavax/swing/text/GapContent$MarkData;)V", nullptr, 0, $method(GapContent$StickyPosition, setMark, void, $GapContent$MarkData*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GapContent$StickyPosition, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.GapContent$StickyPosition", "javax.swing.text.GapContent", "StickyPosition", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.text.GapContent$StickyPosition",
		"java.lang.Object",
		"javax.swing.text.Position",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.GapContent"
	};
	$loadClass(GapContent$StickyPosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GapContent$StickyPosition);
	});
	return class$;
}

$Class* GapContent$StickyPosition::class$ = nullptr;

		} // text
	} // swing
} // javax