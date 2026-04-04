#include <sun/security/krb5/internal/rcache/AuthList.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/ListIterator.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/KrbApErrException.h>
#include <sun/security/krb5/internal/rcache/AuthTimeWithHash.h>
#include <jcpp.h>

#undef KRB_AP_ERR_REPEAT
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $ListIterator = ::java::util::ListIterator;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $KrbApErrException = ::sun::security::krb5::internal::KrbApErrException;
using $AuthTimeWithHash = ::sun::security::krb5::internal::rcache::AuthTimeWithHash;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace rcache {

void AuthList::init$(int32_t lifespan) {
	this->oldestTime = $Integer::MIN_VALUE;
	this->lifespan = lifespan;
	$set(this, entries, $new($LinkedList));
}

void AuthList::put($AuthTimeWithHash* t, $KerberosTime* currentTime) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->entries->isEmpty()) {
			this->entries->addFirst(t);
			this->oldestTime = $nc(t)->ctime;
			return;
		} else {
			$var($AuthTimeWithHash, temp, $cast($AuthTimeWithHash, this->entries->getFirst()));
			int32_t cmp = $nc(temp)->compareTo(t);
			if (cmp < 0) {
				this->entries->addFirst(t);
			} else if (cmp == 0) {
				$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_REPEAT);
			} else {
				$var($ListIterator, it, this->entries->listIterator(1));
				bool found = false;
				while ($nc(it)->hasNext()) {
					$assign(temp, $cast($AuthTimeWithHash, it->next()));
					cmp = $nc(temp)->compareTo(t);
					if (cmp < 0) {
						this->entries->add(this->entries->indexOf(temp), t);
						found = true;
						break;
					} else if (cmp == 0) {
						$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_REPEAT);
					}
				}
				if (!found) {
					this->entries->addLast(t);
				}
			}
		}
		int64_t timeLimit = $nc(currentTime)->getSeconds() - this->lifespan;
		if (this->oldestTime > timeLimit - 5) {
			return;
		}
		while (!this->entries->isEmpty()) {
			$var($AuthTimeWithHash, removed, $cast($AuthTimeWithHash, this->entries->removeLast()));
			if ($nc(removed)->ctime >= timeLimit) {
				this->entries->addLast(removed);
				this->oldestTime = removed->ctime;
				return;
			}
		}
		this->oldestTime = $Integer::MIN_VALUE;
	}
}

bool AuthList::isEmpty() {
	return this->entries->isEmpty();
}

$String* AuthList::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($Iterator, iter, this->entries->descendingIterator());
	int32_t pos = this->entries->size();
	while ($nc(iter)->hasNext()) {
		$var($AuthTimeWithHash, at, $cast($AuthTimeWithHash, iter->next()));
		sb->append(u'#')->append(pos--)->append(": "_s)->append($($nc(at)->toString()))->append(u'\n');
	}
	return sb->toString();
}

AuthList::AuthList() {
}

$Class* AuthList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"entries", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lsun/security/krb5/internal/rcache/AuthTimeWithHash;>;", $PRIVATE | $FINAL, $field(AuthList, entries)},
		{"lifespan", "I", nullptr, $PRIVATE | $FINAL, $field(AuthList, lifespan)},
		{"oldestTime", "I", nullptr, $PRIVATE | $VOLATILE, $field(AuthList, oldestTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(AuthList, init$, void, int32_t)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(AuthList, isEmpty, bool)},
		{"put", "(Lsun/security/krb5/internal/rcache/AuthTimeWithHash;Lsun/security/krb5/internal/KerberosTime;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(AuthList, put, void, $AuthTimeWithHash*, $KerberosTime*), "sun.security.krb5.internal.KrbApErrException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthList, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.rcache.AuthList",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthList);
	});
	return class$;
}

$Class* AuthList::class$ = nullptr;

				} // rcache
			} // internal
		} // krb5
	} // security
} // sun