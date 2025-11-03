#include <sun/net/httpserver/ContextList.h>

#include <java/lang/AssertionError.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <jcpp.h>

#undef MAX_CONTEXTS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ContextList_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ContextList, $assertionsDisabled)},
	{"MAX_CONTEXTS", "I", nullptr, $STATIC | $FINAL, $constField(ContextList, MAX_CONTEXTS)},
	{"list", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lsun/net/httpserver/HttpContextImpl;>;", 0, $field(ContextList, list)},
	{}
};

$MethodInfo _ContextList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextList::*)()>(&ContextList::init$))},
	{"add", "(Lsun/net/httpserver/HttpContextImpl;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"findContext", "(Ljava/lang/String;Ljava/lang/String;)Lsun/net/httpserver/HttpContextImpl;", nullptr, $SYNCHRONIZED},
	{"findContext", "(Ljava/lang/String;Ljava/lang/String;Z)Lsun/net/httpserver/HttpContextImpl;", nullptr, $SYNCHRONIZED},
	{"remove", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"remove", "(Lsun/net/httpserver/HttpContextImpl;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"size", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _ContextList_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ContextList",
	"java.lang.Object",
	nullptr,
	_ContextList_FieldInfo_,
	_ContextList_MethodInfo_
};

$Object* allocate$ContextList($Class* clazz) {
	return $of($alloc(ContextList));
}

bool ContextList::$assertionsDisabled = false;

void ContextList::init$() {
	$set(this, list, $new($LinkedList));
}

void ContextList::add($HttpContextImpl* ctx) {
	$synchronized(this) {
		if (!ContextList::$assertionsDisabled && !($nc(ctx)->getPath() != nullptr)) {
			$throwNew($AssertionError);
		}
		$nc(this->list)->add(ctx);
	}
}

int32_t ContextList::size() {
	$synchronized(this) {
		return $nc(this->list)->size();
	}
}

$HttpContextImpl* ContextList::findContext($String* protocol, $String* path) {
	$synchronized(this) {
		return findContext(protocol, path, false);
	}
}

$HttpContextImpl* ContextList::findContext($String* protocol$renamed, $String* path, bool exact) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, protocol, protocol$renamed);
		$assign(protocol, $nc(protocol)->toLowerCase());
		$var($String, longest, ""_s);
		$var($HttpContextImpl, lc, nullptr);
		{
			$var($Iterator, i$, $nc(this->list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($HttpContextImpl, ctx, $cast($HttpContextImpl, i$->next()));
				{
					if (!$nc($($nc(ctx)->getProtocol()))->equals(protocol)) {
						continue;
					}
					$var($String, cpath, $nc(ctx)->getPath());
					if (exact && !$nc(cpath)->equals(path)) {
						continue;
					} else if (!exact && !$nc(path)->startsWith(cpath)) {
						continue;
					}
					int32_t var$0 = $nc(cpath)->length();
					if (var$0 > $nc(longest)->length()) {
						$assign(longest, cpath);
						$assign(lc, ctx);
					}
				}
			}
		}
		return lc;
	}
}

void ContextList::remove($String* protocol, $String* path) {
	$synchronized(this) {
		$var($HttpContextImpl, ctx, findContext(protocol, path, true));
		if (ctx == nullptr) {
			$throwNew($IllegalArgumentException, "cannot remove element from list"_s);
		}
		$nc(this->list)->remove($of(ctx));
	}
}

void ContextList::remove($HttpContextImpl* context) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		{
			$var($Iterator, i$, $nc(this->list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($HttpContextImpl, ctx, $cast($HttpContextImpl, i$->next()));
				{
					if ($nc($of(ctx))->equals(context)) {
						$nc(this->list)->remove($of(ctx));
						return;
					}
				}
			}
		}
		$throwNew($IllegalArgumentException, "no such context in list"_s);
	}
}

void clinit$ContextList($Class* class$) {
	ContextList::$assertionsDisabled = !ContextList::class$->desiredAssertionStatus();
}

ContextList::ContextList() {
}

$Class* ContextList::load$($String* name, bool initialize) {
	$loadClass(ContextList, name, initialize, &_ContextList_ClassInfo_, clinit$ContextList, allocate$ContextList);
	return class$;
}

$Class* ContextList::class$ = nullptr;

		} // httpserver
	} // net
} // sun