#include <org/w3c/dom/Comment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* Comment::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.Comment",
		nullptr,
		"org.w3c.dom.CharacterData"
	};
	$loadClass(Comment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Comment);
	});
	return class$;
}

$Class* Comment::class$ = nullptr;

		} // dom
	} // w3c
} // org