#include <javax/swing/text/StringContent$StickyPosition.h>
#include <java/util/Vector.h>
#include <javax/swing/text/StringContent$PosRec.h>
#include <javax/swing/text/StringContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringContent = ::javax::swing::text::StringContent;
using $StringContent$PosRec = ::javax::swing::text::StringContent$PosRec;

namespace javax {
	namespace swing {
		namespace text {

void StringContent$StickyPosition::init$($StringContent* this$0, int32_t offset) {
	$set(this, this$0, this$0);
	$set(this, rec, $new($StringContent$PosRec, this$0, offset));
	$nc(this$0->marks)->addElement(this->rec);
}

int32_t StringContent$StickyPosition::getOffset() {
	return $nc(this->rec)->offset;
}

void StringContent$StickyPosition::finalize() {
	$nc(this->rec)->unused = true;
}

$String* StringContent$StickyPosition::toString() {
	return $Integer::toString(getOffset());
}

StringContent$StickyPosition::StringContent$StickyPosition() {
}

$Class* StringContent$StickyPosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/StringContent;", nullptr, $FINAL | $SYNTHETIC, $field(StringContent$StickyPosition, this$0)},
		{"rec", "Ljavax/swing/text/StringContent$PosRec;", nullptr, 0, $field(StringContent$StickyPosition, rec)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/StringContent;I)V", nullptr, 0, $method(StringContent$StickyPosition, init$, void, $StringContent*, int32_t)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(StringContent$StickyPosition, finalize, void), "java.lang.Throwable"},
		{"getOffset", "()I", nullptr, $PUBLIC, $virtualMethod(StringContent$StickyPosition, getOffset, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringContent$StickyPosition, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StringContent$StickyPosition", "javax.swing.text.StringContent", "StickyPosition", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.text.StringContent$StickyPosition",
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
		"javax.swing.text.StringContent"
	};
	$loadClass(StringContent$StickyPosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringContent$StickyPosition);
	});
	return class$;
}

$Class* StringContent$StickyPosition::class$ = nullptr;

		} // text
	} // swing
} // javax