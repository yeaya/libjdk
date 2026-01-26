#include <com/sun/jndi/ldap/LdapName$DnParser.h>

#include <com/sun/jndi/ldap/LdapName$Rdn.h>
#include <com/sun/jndi/ldap/LdapName$TypeAndValue.h>
#include <com/sun/jndi/ldap/LdapName.h>
#include <java/util/Vector.h>
#include <javax/naming/InvalidNameException.h>
#include <jcpp.h>

using $LdapName = ::com::sun::jndi::ldap::LdapName;
using $LdapName$Rdn = ::com::sun::jndi::ldap::LdapName$Rdn;
using $LdapName$TypeAndValue = ::com::sun::jndi::ldap::LdapName$TypeAndValue;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $InvalidNameException = ::javax::naming::InvalidNameException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapName$DnParser_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LdapName$DnParser, name)},
	{"chars", "[C", nullptr, $PRIVATE | $FINAL, $field(LdapName$DnParser, chars)},
	{"len", "I", nullptr, $PRIVATE | $FINAL, $field(LdapName$DnParser, len)},
	{"cur", "I", nullptr, $PRIVATE, $field(LdapName$DnParser, cur)},
	{"valuesCaseSensitive", "Z", nullptr, $PRIVATE, $field(LdapName$DnParser, valuesCaseSensitive)},
	{}
};

$MethodInfo _LdapName$DnParser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(LdapName$DnParser, init$, void, $String*, bool), "javax.naming.InvalidNameException"},
	{"atTerminator", "()Z", nullptr, $PRIVATE, $method(LdapName$DnParser, atTerminator, bool)},
	{"consumeWhitespace", "()V", nullptr, $PRIVATE, $method(LdapName$DnParser, consumeWhitespace, void)},
	{"getDn", "()Ljava/util/Vector;", "()Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapName$Rdn;>;", 0, $virtualMethod(LdapName$DnParser, getDn, $Vector*), "javax.naming.InvalidNameException"},
	{"getRdn", "()Lcom/sun/jndi/ldap/LdapName$Rdn;", nullptr, 0, $virtualMethod(LdapName$DnParser, getRdn, $LdapName$Rdn*), "javax.naming.InvalidNameException"},
	{"parseAttrType", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(LdapName$DnParser, parseAttrType, $String*), "javax.naming.InvalidNameException"},
	{"parseAttrValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(LdapName$DnParser, parseAttrValue, $String*), "javax.naming.InvalidNameException"},
	{"parseBinaryAttrValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(LdapName$DnParser, parseBinaryAttrValue, $String*), "javax.naming.InvalidNameException"},
	{"parseQuotedAttrValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(LdapName$DnParser, parseQuotedAttrValue, $String*), "javax.naming.InvalidNameException"},
	{"parseRdn", "()Lcom/sun/jndi/ldap/LdapName$Rdn;", nullptr, $PRIVATE, $method(LdapName$DnParser, parseRdn, $LdapName$Rdn*), "javax.naming.InvalidNameException"},
	{"parseStringAttrValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(LdapName$DnParser, parseStringAttrValue, $String*), "javax.naming.InvalidNameException"},
	{}
};

$InnerClassInfo _LdapName$DnParser_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapName$DnParser", "com.sun.jndi.ldap.LdapName", "DnParser", $STATIC},
	{}
};

$ClassInfo _LdapName$DnParser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.LdapName$DnParser",
	"java.lang.Object",
	nullptr,
	_LdapName$DnParser_FieldInfo_,
	_LdapName$DnParser_MethodInfo_,
	nullptr,
	nullptr,
	_LdapName$DnParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapName"
};

$Object* allocate$LdapName$DnParser($Class* clazz) {
	return $of($alloc(LdapName$DnParser));
}

void LdapName$DnParser::init$($String* name, bool valuesCaseSensitive) {
	this->cur = 0;
	$set(this, name, name);
	this->len = $nc(name)->length();
	$set(this, chars, name->toCharArray());
	this->valuesCaseSensitive = valuesCaseSensitive;
}

$Vector* LdapName$DnParser::getDn() {
	$useLocalCurrentObjectStackCache();
	this->cur = 0;
	$var($Vector, rdns, $new($Vector, this->len / 3 + 10));
	if (this->len == 0) {
		return rdns;
	}
	rdns->addElement($(parseRdn()));
	while (this->cur < this->len) {
		if ($nc(this->chars)->get(this->cur) == u',' || $nc(this->chars)->get(this->cur) == u';') {
			++this->cur;
			rdns->insertElementAt($(parseRdn()), 0);
		} else {
			$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
		}
	}
	return rdns;
}

$LdapName$Rdn* LdapName$DnParser::getRdn() {
	$useLocalCurrentObjectStackCache();
	$var($LdapName$Rdn, rdn, parseRdn());
	if (this->cur < this->len) {
		$throwNew($InvalidNameException, $$str({"Invalid RDN: "_s, this->name}));
	}
	return rdn;
}

$LdapName$Rdn* LdapName$DnParser::parseRdn() {
	$useLocalCurrentObjectStackCache();
	$var($LdapName$Rdn, rdn, $new($LdapName$Rdn));
	while (this->cur < this->len) {
		consumeWhitespace();
		$var($String, attrType, parseAttrType());
		consumeWhitespace();
		if (this->cur >= this->len || $nc(this->chars)->get(this->cur) != u'=') {
			$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
		}
		++this->cur;
		consumeWhitespace();
		$var($String, value, parseAttrValue());
		consumeWhitespace();
		rdn->add($$new($LdapName$TypeAndValue, attrType, value, this->valuesCaseSensitive));
		if (this->cur >= this->len || $nc(this->chars)->get(this->cur) != u'+') {
			break;
		}
		++this->cur;
	}
	return rdn;
}

$String* LdapName$DnParser::parseAttrType() {
	int32_t beg = this->cur;
	while (this->cur < this->len) {
		char16_t c = $nc(this->chars)->get(this->cur);
		if ($Character::isLetterOrDigit(c) || c == u'.' || c == u'-' || c == u' ') {
			++this->cur;
		} else {
			break;
		}
	}
	while ((this->cur > beg) && ($nc(this->chars)->get(this->cur - 1) == u' ')) {
		--this->cur;
	}
	if (beg == this->cur) {
		$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
	}
	return $new($String, this->chars, beg, this->cur - beg);
}

$String* LdapName$DnParser::parseAttrValue() {
	if (this->cur < this->len && $nc(this->chars)->get(this->cur) == u'#') {
		return parseBinaryAttrValue();
	} else if (this->cur < this->len && $nc(this->chars)->get(this->cur) == u'\"') {
		return parseQuotedAttrValue();
	} else {
		return parseStringAttrValue();
	}
}

$String* LdapName$DnParser::parseBinaryAttrValue() {
	int32_t beg = this->cur;
	++this->cur;
	while (this->cur < this->len && $Character::isLetterOrDigit($nc(this->chars)->get(this->cur))) {
		++this->cur;
	}
	return $new($String, this->chars, beg, this->cur - beg);
}

$String* LdapName$DnParser::parseQuotedAttrValue() {
	int32_t beg = this->cur;
	++this->cur;
	while ((this->cur < this->len) && $nc(this->chars)->get(this->cur) != u'\"') {
		if ($nc(this->chars)->get(this->cur) == u'\\') {
			++this->cur;
		}
		++this->cur;
	}
	if (this->cur >= this->len) {
		$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
	}
	++this->cur;
	return $new($String, this->chars, beg, this->cur - beg);
}

$String* LdapName$DnParser::parseStringAttrValue() {
	int32_t beg = this->cur;
	int32_t esc = -1;
	while ((this->cur < this->len) && !atTerminator()) {
		if ($nc(this->chars)->get(this->cur) == u'\\') {
			++this->cur;
			esc = this->cur;
		}
		++this->cur;
	}
	if (this->cur > this->len) {
		$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
	}
	int32_t end = 0;
	for (end = this->cur; end > beg; --end) {
		if (!$LdapName::isWhitespace($nc(this->chars)->get(end - 1)) || (esc == end - 1)) {
			break;
		}
	}
	return $new($String, this->chars, beg, end - beg);
}

void LdapName$DnParser::consumeWhitespace() {
	while ((this->cur < this->len) && $LdapName::isWhitespace($nc(this->chars)->get(this->cur))) {
		++this->cur;
	}
}

bool LdapName$DnParser::atTerminator() {
	return (this->cur < this->len && ($nc(this->chars)->get(this->cur) == u',' || $nc(this->chars)->get(this->cur) == u';' || $nc(this->chars)->get(this->cur) == u'+'));
}

LdapName$DnParser::LdapName$DnParser() {
}

$Class* LdapName$DnParser::load$($String* name, bool initialize) {
	$loadClass(LdapName$DnParser, name, initialize, &_LdapName$DnParser_ClassInfo_, allocate$LdapName$DnParser);
	return class$;
}

$Class* LdapName$DnParser::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com