#include <com/sun/imageio/stream/StreamCloser$1.h>
#include <com/sun/imageio/stream/StreamCloser$CloseAction.h>
#include <com/sun/imageio/stream/StreamCloser.h>
#include <java/io/IOException.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $StreamCloser$CloseActionArray = $Array<::com::sun::imageio::stream::StreamCloser$CloseAction>;
using $StreamCloser = ::com::sun::imageio::stream::StreamCloser;
using $StreamCloser$CloseAction = ::com::sun::imageio::stream::StreamCloser$CloseAction;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

void StreamCloser$1::init$() {
}

void StreamCloser$1::run() {
	$useLocalObjectStack();
	$init($StreamCloser);
	if ($StreamCloser::toCloseQueue != nullptr) {
		$synchronized($StreamCloser::class$) {
			$var($Set, set, $StreamCloser::toCloseQueue->keySet());
			$var($StreamCloser$CloseActionArray, actions, $new($StreamCloser$CloseActionArray, $nc(set)->size()));
			$assign(actions, $cast($StreamCloser$CloseActionArray, set->toArray(actions)));
			{
				$var($StreamCloser$CloseActionArray, arr$, actions);
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($StreamCloser$CloseAction, ca, arr$->get(i$));
					if (ca != nullptr) {
						try {
							ca->performAction();
						} catch ($IOException& e) {
						}
					}
				}
			}
		}
	}
}

StreamCloser$1::StreamCloser$1() {
}

$Class* StreamCloser$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StreamCloser$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(StreamCloser$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.stream.StreamCloser",
		"addToQueue",
		"(Lcom/sun/imageio/stream/StreamCloser$CloseAction;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.stream.StreamCloser$1", nullptr, nullptr, 0},
		{"com.sun.imageio.stream.StreamCloser$CloseAction", "com.sun.imageio.stream.StreamCloser", "CloseAction", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.stream.StreamCloser$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.stream.StreamCloser"
	};
	$loadClass(StreamCloser$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamCloser$1);
	});
	return class$;
}

$Class* StreamCloser$1::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com