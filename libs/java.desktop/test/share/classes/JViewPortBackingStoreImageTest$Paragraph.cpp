#include <JViewPortBackingStoreImageTest$Paragraph.h>
#include <JViewPortBackingStoreImageTest$AttributedContent.h>
#include <JViewPortBackingStoreImageTest.h>
#include <jcpp.h>

using $JViewPortBackingStoreImageTest$AttributedContentArray = $Array<JViewPortBackingStoreImageTest$AttributedContent>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JViewPortBackingStoreImageTest$Paragraph::init$($String* logical, $JViewPortBackingStoreImageTest$AttributedContentArray* data) {
	$set(this, logical, logical);
	$set(this, data, data);
}

JViewPortBackingStoreImageTest$Paragraph::JViewPortBackingStoreImageTest$Paragraph() {
}

$Class* JViewPortBackingStoreImageTest$Paragraph::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"logical", "Ljava/lang/String;", nullptr, 0, $field(JViewPortBackingStoreImageTest$Paragraph, logical)},
		{"data", "[LJViewPortBackingStoreImageTest$AttributedContent;", nullptr, 0, $field(JViewPortBackingStoreImageTest$Paragraph, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[LJViewPortBackingStoreImageTest$AttributedContent;)V", nullptr, 0, $method(JViewPortBackingStoreImageTest$Paragraph, init$, void, $String*, $JViewPortBackingStoreImageTest$AttributedContentArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JViewPortBackingStoreImageTest$Paragraph", "JViewPortBackingStoreImageTest", "Paragraph", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JViewPortBackingStoreImageTest$Paragraph",
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
		"JViewPortBackingStoreImageTest"
	};
	$loadClass(JViewPortBackingStoreImageTest$Paragraph, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JViewPortBackingStoreImageTest$Paragraph);
	});
	return class$;
}

$Class* JViewPortBackingStoreImageTest$Paragraph::class$ = nullptr;