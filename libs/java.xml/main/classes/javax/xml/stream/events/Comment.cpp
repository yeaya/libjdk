#include <javax/xml/stream/events/Comment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$Class* Comment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Comment, getText, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.stream.events.Comment",
		nullptr,
		"javax.xml.stream.events.XMLEvent",
		nullptr,
		methodInfos$$
	};
	$loadClass(Comment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Comment);
	});
	return class$;
}

$Class* Comment::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax