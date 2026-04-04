#include <javax/swing/text/StringContent$PosRec.h>
#include <javax/swing/text/StringContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringContent = ::javax::swing::text::StringContent;

namespace javax {
	namespace swing {
		namespace text {

void StringContent$PosRec::init$($StringContent* this$0, int32_t offset) {
	$set(this, this$0, this$0);
	this->offset = offset;
}

StringContent$PosRec::StringContent$PosRec() {
}

$Class* StringContent$PosRec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/StringContent;", nullptr, $FINAL | $SYNTHETIC, $field(StringContent$PosRec, this$0)},
		{"offset", "I", nullptr, 0, $field(StringContent$PosRec, offset)},
		{"unused", "Z", nullptr, 0, $field(StringContent$PosRec, unused)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/StringContent;I)V", nullptr, 0, $method(StringContent$PosRec, init$, void, $StringContent*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StringContent$PosRec", "javax.swing.text.StringContent", "PosRec", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.text.StringContent$PosRec",
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
		"javax.swing.text.StringContent"
	};
	$loadClass(StringContent$PosRec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringContent$PosRec);
	});
	return class$;
}

$Class* StringContent$PosRec::class$ = nullptr;

		} // text
	} // swing
} // javax