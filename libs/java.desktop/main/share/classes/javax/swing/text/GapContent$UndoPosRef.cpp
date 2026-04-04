#include <javax/swing/text/GapContent$UndoPosRef.h>
#include <javax/swing/text/GapContent$MarkData.h>
#include <javax/swing/text/GapContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GapContent = ::javax::swing::text::GapContent;
using $GapContent$MarkData = ::javax::swing::text::GapContent$MarkData;

namespace javax {
	namespace swing {
		namespace text {

void GapContent$UndoPosRef::init$($GapContent* this$0, $GapContent$MarkData* rec) {
	$set(this, this$0, this$0);
	$set(this, rec, rec);
	this->undoLocation = $nc(rec)->getOffset();
}

void GapContent$UndoPosRef::resetLocation(int32_t endOffset, int32_t g1) {
	if (this->undoLocation != endOffset) {
		$nc(this->rec)->index = this->undoLocation;
	} else {
		$nc(this->rec)->index = g1;
	}
}

GapContent$UndoPosRef::GapContent$UndoPosRef() {
}

$Class* GapContent$UndoPosRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/GapContent;", nullptr, $FINAL | $SYNTHETIC, $field(GapContent$UndoPosRef, this$0)},
		{"undoLocation", "I", nullptr, $PROTECTED, $field(GapContent$UndoPosRef, undoLocation)},
		{"rec", "Ljavax/swing/text/GapContent$MarkData;", nullptr, $PROTECTED, $field(GapContent$UndoPosRef, rec)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/GapContent;Ljavax/swing/text/GapContent$MarkData;)V", nullptr, 0, $method(GapContent$UndoPosRef, init$, void, $GapContent*, $GapContent$MarkData*)},
		{"resetLocation", "(II)V", nullptr, $PROTECTED, $method(GapContent$UndoPosRef, resetLocation, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.GapContent$UndoPosRef", "javax.swing.text.GapContent", "UndoPosRef", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.text.GapContent$UndoPosRef",
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
		"javax.swing.text.GapContent"
	};
	$loadClass(GapContent$UndoPosRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GapContent$UndoPosRef);
	});
	return class$;
}

$Class* GapContent$UndoPosRef::class$ = nullptr;

		} // text
	} // swing
} // javax