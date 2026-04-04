#include <javax/swing/text/GapContent$MarkData.h>
#include <java/lang/Math.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/text/GapContent$StickyPosition.h>
#include <javax/swing/text/GapContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $GapContent = ::javax::swing::text::GapContent;
using $GapContent$StickyPosition = ::javax::swing::text::GapContent$StickyPosition;

namespace javax {
	namespace swing {
		namespace text {

void GapContent$MarkData::init$($GapContent* this$0, int32_t index) {
	$set(this, this$0, this$0);
	$WeakReference::init$(nullptr);
	this->index = index;
}

void GapContent$MarkData::init$($GapContent* this$0, int32_t index, $GapContent$StickyPosition* position, $ReferenceQueue* queue) {
	$set(this, this$0, this$0);
	$WeakReference::init$(position, queue);
	this->index = index;
}

int32_t GapContent$MarkData::getOffset() {
	int32_t g0 = this->this$0->getGapStart();
	int32_t g1 = this->this$0->getGapEnd();
	int32_t offs = (this->index < g0) ? this->index : this->index - (g1 - g0);
	return $Math::max(offs, 0);
}

$GapContent$StickyPosition* GapContent$MarkData::getPosition() {
	return $cast($GapContent$StickyPosition, get());
}

GapContent$MarkData::GapContent$MarkData() {
}

$Class* GapContent$MarkData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/GapContent;", nullptr, $FINAL | $SYNTHETIC, $field(GapContent$MarkData, this$0)},
		{"index", "I", nullptr, 0, $field(GapContent$MarkData, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/GapContent;I)V", nullptr, 0, $method(GapContent$MarkData, init$, void, $GapContent*, int32_t)},
		{"<init>", "(Ljavax/swing/text/GapContent;ILjavax/swing/text/GapContent$StickyPosition;Ljava/lang/ref/ReferenceQueue;)V", "(ILjavax/swing/text/GapContent$StickyPosition;Ljava/lang/ref/ReferenceQueue<-Ljavax/swing/text/GapContent$StickyPosition;>;)V", 0, $method(GapContent$MarkData, init$, void, $GapContent*, int32_t, $GapContent$StickyPosition*, $ReferenceQueue*)},
		{"getOffset", "()I", nullptr, $PUBLIC, $method(GapContent$MarkData, getOffset, int32_t)},
		{"getPosition", "()Ljavax/swing/text/GapContent$StickyPosition;", nullptr, 0, $method(GapContent$MarkData, getPosition, $GapContent$StickyPosition*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.GapContent$MarkData", "javax.swing.text.GapContent", "MarkData", $FINAL},
		{"javax.swing.text.GapContent$StickyPosition", "javax.swing.text.GapContent", "StickyPosition", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.text.GapContent$MarkData",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljavax/swing/text/GapContent$StickyPosition;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.GapContent"
	};
	$loadClass(GapContent$MarkData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GapContent$MarkData);
	});
	return class$;
}

$Class* GapContent$MarkData::class$ = nullptr;

		} // text
	} // swing
} // javax