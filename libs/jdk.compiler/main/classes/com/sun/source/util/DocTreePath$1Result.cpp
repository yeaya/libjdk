#include <com/sun/source/util/DocTreePath$1Result.h>
#include <com/sun/source/util/DocTreePath.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void DocTreePath$1Result::init$($DocTreePath* path) {
	$Error::init$();
	$set(this, path, path);
}

DocTreePath$1Result::DocTreePath$1Result() {
}

DocTreePath$1Result::DocTreePath$1Result(const DocTreePath$1Result& e) : $Error(e) {
}

void DocTreePath$1Result::throw$() {
	throw *this;
}

$Class* DocTreePath$1Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DocTreePath$1Result, serialVersionUID)},
		{"path", "Lcom/sun/source/util/DocTreePath;", nullptr, 0, $field(DocTreePath$1Result, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/util/DocTreePath;)V", nullptr, 0, $method(DocTreePath$1Result, init$, void, $DocTreePath*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.source.util.DocTreePath",
		"getPath",
		"(Lcom/sun/source/util/DocTreePath;Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/util/DocTreePath;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.util.DocTreePath$1Result", nullptr, "Result", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.source.util.DocTreePath$1Result",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.source.util.DocTreePath"
	};
	$loadClass(DocTreePath$1Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocTreePath$1Result);
	});
	return class$;
}

$Class* DocTreePath$1Result::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com