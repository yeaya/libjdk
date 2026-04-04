#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/toolkit/url/Uri.h>
#include <com/sun/jndi/toolkit/url/UrlUtil.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/IllegalStateException.h>
#include <java/net/MalformedURLException.h>
#include <java/util/StringTokenizer.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

#undef DN

using $Uri = ::com::sun::jndi::toolkit::url::Uri;
using $UrlUtil = ::com::sun::jndi::toolkit::url::UrlUtil;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $StringTokenizer = ::java::util::StringTokenizer;
using $NamingException = ::javax::naming::NamingException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void LdapURL::init$($String* url) {
	$useLocalObjectStack();
	$Uri::init$();
	this->useSsl$ = false;
	$set(this, DN, nullptr);
	$set(this, attributes, nullptr);
	$set(this, scope, nullptr);
	$set(this, filter, nullptr);
	$set(this, extensions, nullptr);
	try {
		init(url);
		this->useSsl$ = $nc(this->scheme)->equalsIgnoreCase("ldaps"_s);
		if (!(this->scheme->equalsIgnoreCase("ldap"_s) || this->useSsl$)) {
			$throwNew($MalformedURLException, $$str({"Not an LDAP URL: "_s, url}));
		}
		parsePathAndQuery();
	} catch ($MalformedURLException& e) {
		$var($NamingException, ne, $new($NamingException, $$str({"Cannot parse url: "_s, url})));
		ne->setRootCause(e);
		$throw(ne);
	} catch ($UnsupportedEncodingException& e) {
		$var($NamingException, ne, $new($NamingException, $$str({"Cannot parse url: "_s, url})));
		ne->setRootCause(e);
		$throw(ne);
	}
}

bool LdapURL::useSsl() {
	return this->useSsl$;
}

$String* LdapURL::getDN() {
	return this->DN;
}

$String* LdapURL::getAttributes() {
	return this->attributes;
}

$String* LdapURL::getScope() {
	return this->scope;
}

$String* LdapURL::getFilter() {
	return this->filter;
}

$String* LdapURL::getExtensions() {
	return this->extensions;
}

$StringArray* LdapURL::fromList($String* urlList) {
	$init(LdapURL);
	$useLocalObjectStack();
	$var($StringArray, urls, $new($StringArray, ($nc(urlList)->length() + 1) / 2));
	int32_t i = 0;
	$var($StringTokenizer, st, $new($StringTokenizer, urlList, " "_s));
	while (st->hasMoreTokens()) {
		urls->set(i++, $(st->nextToken()));
	}
	$var($StringArray, trimmed, $new($StringArray, i));
	$System::arraycopy(urls, 0, trimmed, 0, i);
	return trimmed;
}

bool LdapURL::hasQueryComponents($String* url) {
	$init(LdapURL);
	return ($nc(url)->lastIndexOf(u'?') != -1);
}

$String* LdapURL::toUrlString($String* host, int32_t port, $String* dn, bool useSsl) {
	$init(LdapURL);
	$useLocalObjectStack();
	try {
		$var($String, h, (host != nullptr) ? host : ""_s);
		bool var$0 = $nc(h)->indexOf(u':') != -1;
		if (var$0 && (h->charAt(0) != u'[')) {
			$assign(h, $str({"["_s, h, "]"_s}));
		}
		$var($String, p, (port != -1) ? ($str({":"_s, $$str(port)})) : ""_s);
		$var($String, d, (dn != nullptr) ? ($str({"/"_s, $($UrlUtil::encode(dn, "UTF8"_s))})) : ""_s);
		return useSsl ? $str({"ldaps://"_s, h, p, d}) : $str({"ldap://"_s, h, p, d});
	} catch ($UnsupportedEncodingException& e) {
		$throwNew($IllegalStateException, "UTF-8 encoding unavailable"_s);
	}
	$shouldNotReachHere();
}

void LdapURL::parsePathAndQuery() {
	if ($nc(this->path)->isEmpty()) {
		return;
	}
	$set(this, DN, this->path->startsWith("/"_s) ? this->path->substring(1) : this->path);
	if ($nc(this->DN)->length() > 0) {
		$set(this, DN, $UrlUtil::decode(this->DN, "UTF8"_s));
	}
	if (this->query == nullptr || this->query->length() < 2) {
		return;
	}
	int32_t currentIndex = 1;
	int32_t nextQmark = 0;
	int32_t endIndex = 0;
	nextQmark = $nc(this->query)->indexOf(u'?', currentIndex);
	endIndex = nextQmark == -1 ? this->query->length() : nextQmark;
	if (endIndex - currentIndex > 0) {
		$set(this, attributes, this->query->substring(currentIndex, endIndex));
	}
	currentIndex = endIndex + 1;
	if (currentIndex >= this->query->length()) {
		return;
	}
	nextQmark = this->query->indexOf(u'?', currentIndex);
	endIndex = nextQmark == -1 ? this->query->length() : nextQmark;
	if (endIndex - currentIndex > 0) {
		$set(this, scope, this->query->substring(currentIndex, endIndex));
	}
	currentIndex = endIndex + 1;
	if (currentIndex >= this->query->length()) {
		return;
	}
	nextQmark = this->query->indexOf(u'?', currentIndex);
	endIndex = nextQmark == -1 ? this->query->length() : nextQmark;
	if (endIndex - currentIndex > 0) {
		$set(this, filter, this->query->substring(currentIndex, endIndex));
		$set(this, filter, $UrlUtil::decode(this->filter, "UTF8"_s));
	}
	currentIndex = endIndex + 1;
	if (currentIndex >= $nc(this->query)->length()) {
		return;
	}
	if (this->query->length() - currentIndex > 0) {
		$set(this, extensions, this->query->substring(currentIndex));
		$set(this, extensions, $UrlUtil::decode(this->extensions, "UTF8"_s));
	}
}

LdapURL::LdapURL() {
}

$Class* LdapURL::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"useSsl", "Z", nullptr, $PRIVATE, $field(LdapURL, useSsl$)},
		{"DN", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapURL, DN)},
		{"attributes", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapURL, attributes)},
		{"scope", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapURL, scope)},
		{"filter", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapURL, filter)},
		{"extensions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapURL, extensions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LdapURL, init$, void, $String*), "javax.naming.NamingException"},
		{"fromList", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(LdapURL, fromList, $StringArray*, $String*), "javax.naming.NamingException"},
		{"getAttributes", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LdapURL, getAttributes, $String*)},
		{"getDN", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LdapURL, getDN, $String*)},
		{"getExtensions", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LdapURL, getExtensions, $String*)},
		{"getFilter", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LdapURL, getFilter, $String*)},
		{"getScope", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LdapURL, getScope, $String*)},
		{"hasQueryComponents", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(LdapURL, hasQueryComponents, bool, $String*)},
		{"parsePathAndQuery", "()V", nullptr, $PRIVATE, $method(LdapURL, parsePathAndQuery, void), "java.net.MalformedURLException,java.io.UnsupportedEncodingException"},
		{"toUrlString", "(Ljava/lang/String;ILjava/lang/String;Z)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(LdapURL, toUrlString, $String*, $String*, int32_t, $String*, bool)},
		{"useSsl", "()Z", nullptr, $PUBLIC, $method(LdapURL, useSsl, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.LdapURL",
		"com.sun.jndi.toolkit.url.Uri",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LdapURL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapURL);
	});
	return class$;
}

$Class* LdapURL::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com