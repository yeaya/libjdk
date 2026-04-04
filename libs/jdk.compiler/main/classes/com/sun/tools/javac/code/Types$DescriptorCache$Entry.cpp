#include <com/sun/tools/javac/code/Types$DescriptorCache$Entry.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache.h>
#include <jcpp.h>

using $Types$DescriptorCache = ::com::sun::tools::javac::code::Types$DescriptorCache;
using $Types$DescriptorCache$FunctionDescriptor = ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$DescriptorCache$Entry::init$($Types$DescriptorCache* this$1, $Types$DescriptorCache$FunctionDescriptor* cachedDescRes, int32_t prevMark) {
	$set(this, this$1, this$1);
	$set(this, cachedDescRes, cachedDescRes);
	this->prevMark = prevMark;
}

bool Types$DescriptorCache$Entry::matches(int32_t mark) {
	return this->prevMark == mark;
}

Types$DescriptorCache$Entry::Types$DescriptorCache$Entry() {
}

$Class* Types$DescriptorCache$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/code/Types$DescriptorCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorCache$Entry, this$1)},
		{"cachedDescRes", "Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;", nullptr, $FINAL, $field(Types$DescriptorCache$Entry, cachedDescRes)},
		{"prevMark", "I", nullptr, $FINAL, $field(Types$DescriptorCache$Entry, prevMark)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;I)V", nullptr, $PUBLIC, $method(Types$DescriptorCache$Entry, init$, void, $Types$DescriptorCache*, $Types$DescriptorCache$FunctionDescriptor*, int32_t)},
		{"matches", "(I)Z", nullptr, 0, $virtualMethod(Types$DescriptorCache$Entry, matches, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$DescriptorCache", "com.sun.tools.javac.code.Types", "DescriptorCache", 0},
		{"com.sun.tools.javac.code.Types$DescriptorCache$Entry", "com.sun.tools.javac.code.Types$DescriptorCache", "Entry", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$DescriptorCache$Entry",
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
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$DescriptorCache$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$DescriptorCache$Entry);
	});
	return class$;
}

$Class* Types$DescriptorCache$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com