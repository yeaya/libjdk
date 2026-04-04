#include <javax/swing/text/rtf/RTFReader$InfoDestination.h>
#include <javax/swing/text/rtf/RTFReader$DiscardingDestination.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$DiscardingDestination = ::javax::swing::text::rtf::RTFReader$DiscardingDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

void RTFReader$InfoDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$RTFReader$DiscardingDestination::init$(this$0);
}

RTFReader$InfoDestination::RTFReader$InfoDestination() {
}

$Class* RTFReader$InfoDestination::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$InfoDestination, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, 0, $method(RTFReader$InfoDestination, init$, void, $RTFReader*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.rtf.RTFReader$InfoDestination", "javax.swing.text.rtf.RTFReader", "InfoDestination", 0},
		{"javax.swing.text.rtf.RTFReader$DiscardingDestination", "javax.swing.text.rtf.RTFReader", "DiscardingDestination", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.rtf.RTFReader$InfoDestination",
		"javax.swing.text.rtf.RTFReader$DiscardingDestination",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.rtf.RTFReader"
	};
	$loadClass(RTFReader$InfoDestination, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RTFReader$InfoDestination);
	});
	return class$;
}

$Class* RTFReader$InfoDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax