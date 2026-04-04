#include <JViewPortBackingStoreImageTest$AttributedContent.h>
#include <JViewPortBackingStoreImageTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JViewPortBackingStoreImageTest$AttributedContent::init$($String* attr, $String* content) {
	$set(this, attr, attr);
	$set(this, content, content);
}

JViewPortBackingStoreImageTest$AttributedContent::JViewPortBackingStoreImageTest$AttributedContent() {
}

$Class* JViewPortBackingStoreImageTest$AttributedContent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"attr", "Ljava/lang/String;", nullptr, 0, $field(JViewPortBackingStoreImageTest$AttributedContent, attr)},
		{"content", "Ljava/lang/String;", nullptr, 0, $field(JViewPortBackingStoreImageTest$AttributedContent, content)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(JViewPortBackingStoreImageTest$AttributedContent, init$, void, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JViewPortBackingStoreImageTest$AttributedContent", "JViewPortBackingStoreImageTest", "AttributedContent", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JViewPortBackingStoreImageTest$AttributedContent",
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
	$loadClass(JViewPortBackingStoreImageTest$AttributedContent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JViewPortBackingStoreImageTest$AttributedContent);
	});
	return class$;
}

$Class* JViewPortBackingStoreImageTest$AttributedContent::class$ = nullptr;