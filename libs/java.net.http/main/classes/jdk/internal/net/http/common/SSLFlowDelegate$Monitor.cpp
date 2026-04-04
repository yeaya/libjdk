#include <jdk/internal/net/http/common/SSLFlowDelegate$Monitor.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate$Monitor$FinalMonitorable.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate$Monitorable.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $SSLFlowDelegate$Monitor$FinalMonitorable = ::jdk::internal::net::http::common::SSLFlowDelegate$Monitor$FinalMonitorable;
using $SSLFlowDelegate$Monitorable = ::jdk::internal::net::http::common::SSLFlowDelegate$Monitorable;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

SSLFlowDelegate$Monitor* SSLFlowDelegate$Monitor::themon = nullptr;

void SSLFlowDelegate$Monitor::init$() {
	$Thread::init$("Monitor"_s);
	$set(this, queue, $new($ReferenceQueue));
	setDaemon(true);
	$set(this, list, $Collections::synchronizedList($$new($LinkedList)));
	$set(this, finalList, $new($ArrayList));
}

void SSLFlowDelegate$Monitor::addTarget($SSLFlowDelegate$Monitorable* o) {
	$nc(this->list)->add($$new($WeakReference, o, this->queue));
}

void SSLFlowDelegate$Monitor::removeTarget($SSLFlowDelegate$Monitorable* o) {
	$useLocalObjectStack();
	$synchronized(this->list) {
		$var($Iterator, it, this->list->iterator());
		while ($nc(it)->hasNext()) {
			$var($SSLFlowDelegate$Monitorable, m, $cast($SSLFlowDelegate$Monitorable, $$sure($WeakReference, it->next())->get()));
			if (m == nullptr) {
				it->remove();
			}
			if (o == m) {
				it->remove();
				break;
			}
		}
		$var($SSLFlowDelegate$Monitor$FinalMonitorable, m, $new($SSLFlowDelegate$Monitor$FinalMonitorable, this, o));
		addTarget(m);
		$Reference::reachabilityFence(m);
	}
}

void SSLFlowDelegate$Monitor::add($SSLFlowDelegate$Monitorable* o) {
	$init(SSLFlowDelegate$Monitor);
	$nc(SSLFlowDelegate$Monitor::themon)->addTarget(o);
}

void SSLFlowDelegate$Monitor::remove($SSLFlowDelegate$Monitorable* o) {
	$init(SSLFlowDelegate$Monitor);
	$nc(SSLFlowDelegate$Monitor::themon)->removeTarget(o);
}

void SSLFlowDelegate$Monitor::run() {
	$useLocalObjectStack();
	$nc($System::out)->println("Monitor starting"_s);
	try {
		while (true) {
			$Thread::sleep(20 * 1000);
			$synchronized(this->list) {
				$var($Reference, expired, nullptr);
				while (($assign(expired, this->queue->poll())) != nullptr) {
					this->list->remove(expired);
				}
				{
					$var($Iterator, i$, this->list->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($WeakReference, ref, $cast($WeakReference, i$->next()));
						{
							$var($SSLFlowDelegate$Monitorable, o, $cast($SSLFlowDelegate$Monitorable, $nc(ref)->get()));
							if (o == nullptr) {
								continue;
							}
							if ($instanceOf($SSLFlowDelegate$Monitor$FinalMonitorable, o)) {
								ref->enqueue();
							}
							$System::out->println($($nc(o)->getInfo()));
							$System::out->println("-------------------------"_s);
						}
					}
				}
			}
			$System::out->println("--o-o-o-o-o-o-o-o-o-o-o-o-o-o-"_s);
		}
	} catch ($InterruptedException& e) {
		$System::out->println($$str({"Monitor exiting with "_s, e}));
	}
}

void SSLFlowDelegate$Monitor::clinit$($Class* clazz) {
	{
		$assignStatic(SSLFlowDelegate$Monitor::themon, $new(SSLFlowDelegate$Monitor));
		SSLFlowDelegate$Monitor::themon->start();
	}
}

SSLFlowDelegate$Monitor::SSLFlowDelegate$Monitor() {
}

$Class* SSLFlowDelegate$Monitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/ref/WeakReference<Ljdk/internal/net/http/common/SSLFlowDelegate$Monitorable;>;>;", $FINAL, $field(SSLFlowDelegate$Monitor, list)},
		{"finalList", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/net/http/common/SSLFlowDelegate$Monitor$FinalMonitorable;>;", $FINAL, $field(SSLFlowDelegate$Monitor, finalList)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljdk/internal/net/http/common/SSLFlowDelegate$Monitorable;>;", $FINAL, $field(SSLFlowDelegate$Monitor, queue)},
		{"themon", "Ljdk/internal/net/http/common/SSLFlowDelegate$Monitor;", nullptr, $STATIC, $staticField(SSLFlowDelegate$Monitor, themon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SSLFlowDelegate$Monitor, init$, void)},
		{"add", "(Ljdk/internal/net/http/common/SSLFlowDelegate$Monitorable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SSLFlowDelegate$Monitor, add, void, $SSLFlowDelegate$Monitorable*)},
		{"addTarget", "(Ljdk/internal/net/http/common/SSLFlowDelegate$Monitorable;)V", nullptr, 0, $virtualMethod(SSLFlowDelegate$Monitor, addTarget, void, $SSLFlowDelegate$Monitorable*)},
		{"remove", "(Ljdk/internal/net/http/common/SSLFlowDelegate$Monitorable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SSLFlowDelegate$Monitor, remove, void, $SSLFlowDelegate$Monitorable*)},
		{"removeTarget", "(Ljdk/internal/net/http/common/SSLFlowDelegate$Monitorable;)V", nullptr, 0, $virtualMethod(SSLFlowDelegate$Monitor, removeTarget, void, $SSLFlowDelegate$Monitorable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SSLFlowDelegate$Monitor, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SSLFlowDelegate$Monitor", "jdk.internal.net.http.common.SSLFlowDelegate", "Monitor", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.common.SSLFlowDelegate$Monitor$FinalMonitorable", "jdk.internal.net.http.common.SSLFlowDelegate$Monitor", "FinalMonitorable", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.common.SSLFlowDelegate$Monitor",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SSLFlowDelegate"
	};
	$loadClass(SSLFlowDelegate$Monitor, name, initialize, &classInfo$$, SSLFlowDelegate$Monitor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLFlowDelegate$Monitor);
	});
	return class$;
}

$Class* SSLFlowDelegate$Monitor::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk