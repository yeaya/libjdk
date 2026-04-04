#include <jdk/nio/Channels$SelectableChannelCloser.h>
#include <java/nio/channels/SelectableChannel.h>
#include <jdk/nio/Channels.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;

namespace jdk {
	namespace nio {

$Class* Channels$SelectableChannelCloser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"implCloseChannel", "(Ljava/nio/channels/SelectableChannel;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Channels$SelectableChannelCloser, implCloseChannel, void, $SelectableChannel*), "java.io.IOException"},
		{"implReleaseChannel", "(Ljava/nio/channels/SelectableChannel;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Channels$SelectableChannelCloser, implReleaseChannel, void, $SelectableChannel*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.Channels$SelectableChannelCloser", "jdk.nio.Channels", "SelectableChannelCloser", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.nio.Channels$SelectableChannelCloser",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.nio.Channels"
	};
	$loadClass(Channels$SelectableChannelCloser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Channels$SelectableChannelCloser);
	});
	return class$;
}

$Class* Channels$SelectableChannelCloser::class$ = nullptr;

	} // nio
} // jdk