#include <org/w3c/dom/Comment.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace org {
	namespace w3c {
		namespace dom {

$ClassInfo _Comment_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Comment",
	nullptr,
	"org.w3c.dom.CharacterData"
};

$Object* allocate$Comment($Class* clazz) {
	return $of($alloc(Comment));
}

$Class* Comment::load$($String* name, bool initialize) {
	$loadClass(Comment, name, initialize, &_Comment_ClassInfo_, allocate$Comment);
	return class$;
}

$Class* Comment::class$ = nullptr;

		} // dom
	} // w3c
} // org