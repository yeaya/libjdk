#include <com/sun/tools/sjavac/Util.h>

#include <java/io/File.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Path = ::java::nio::file::Path;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Function = ::java::util::function::Function;
using $Pattern = ::java::util::regex::Pattern;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Util$$Lambda$lambda$indexBy$0 : public $Function {
	$class(Util$$Lambda$lambda$indexBy$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* o) override {
		 return Util::lambda$indexBy$0(o);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Util$$Lambda$lambda$indexBy$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Util$$Lambda$lambda$indexBy$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Util$$Lambda$lambda$indexBy$0, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Util$$Lambda$lambda$indexBy$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Util$$Lambda$lambda$indexBy$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.Util$$Lambda$lambda$indexBy$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Util$$Lambda$lambda$indexBy$0::load$($String* name, bool initialize) {
	$loadClass(Util$$Lambda$lambda$indexBy$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Util$$Lambda$lambda$indexBy$0::class$ = nullptr;

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Util, init$, void)},
	{"cleanSubOptions", "(Ljava/util/Set;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/String;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(Util, cleanSubOptions, $String*, $Set*, $String*)},
	{"extractBooleanOption", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, extractBooleanOption, bool, $String*, $String*, bool)},
	{"extractIntOption", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, extractIntOption, int32_t, $String*, $String*)},
	{"extractIntOption", "(Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, extractIntOption, int32_t, $String*, $String*, int32_t)},
	{"extractStringOption", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, extractStringOption, $String*, $String*, $String*)},
	{"extractStringOption", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, extractStringOption, $String*, $String*, $String*, $String*)},
	{"extractStringOptionLine", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, extractStringOptionLine, $String*, $String*, $String*, $String*)},
	{"extractStringOptionWithDelimiter", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;C)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Util, extractStringOptionWithDelimiter, $String*, $String*, $String*, $String*, char16_t)},
	{"fileSuffix", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, fileSuffix, $String*, $Path*)},
	{"findServerSettings", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, findServerSettings, $String*, $StringArray*)},
	{"getLines", "(Ljava/lang/String;)Ljava/util/stream/Stream;", "(Ljava/lang/String;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(Util, getLines, $Stream*, $String*)},
	{"getStackTrace", "(Ljava/lang/Throwable;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, getStackTrace, $String*, $Throwable*)},
	{"indexBy", "(Ljava/util/Collection;Ljava/util/function/Function;)Ljava/util/Map;", "<I:Ljava/lang/Object;T:Ljava/lang/Object;>(Ljava/util/Collection<+TT;>;Ljava/util/function/Function<-TT;+TI;>;)Ljava/util/Map<TI;TT;>;", $PUBLIC | $STATIC, $staticMethod(Util, indexBy, $Map*, $Collection*, $Function*)},
	{"intersection", "(Ljava/util/Collection;Ljava/util/Collection;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(Ljava/util/Collection<+TE;>;Ljava/util/Collection<+TE;>;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Util, intersection, $Set*, $Collection*, $Collection*)},
	{"justPackageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, justPackageName, $String*, $String*)},
	{"lambda$indexBy$0", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Util, lambda$indexBy$0, $Object*, Object$*)},
	{"normalizeDriveLetter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, normalizeDriveLetter, $String*, $String*)},
	{"pathToFile", "(Ljava/nio/file/Path;)Ljava/io/File;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, pathToFile, $File*, $Path*)},
	{"pkgNameOfClassName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, pkgNameOfClassName, $String*, $String*)},
	{"set", "([Ljava/lang/String;)Ljava/util/Set;", "([Ljava/lang/String;)Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Util, set, $Set*, $StringArray*)},
	{"subtract", "(Ljava/util/Set;Ljava/util/Set;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(Ljava/util/Set<+TE;>;Ljava/util/Set<+TE;>;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Util, subtract, $Set*, $Set*, $Set*)},
	{"toFileSystemPath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, toFileSystemPath, $String*, $String*)},
	{"union", "(Ljava/util/Set;Ljava/util/Set;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(Ljava/util/Set<+TE;>;Ljava/util/Set<+TE;>;)Ljava/util/Set<TE;>;", $PUBLIC | $STATIC, $staticMethod(Util, union$, $Set*, $Set*, $Set*)},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.Util",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Util_MethodInfo_
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

void Util::init$() {
}

$String* Util::toFileSystemPath($String* pkgId) {
	$useLocalCurrentObjectStackCache();
	if (pkgId == nullptr || $nc(pkgId)->length() == 0) {
		return nullptr;
	}
	$var($String, pn, nullptr);
	if ($nc(pkgId)->charAt(0) == u':') {
		$init($File);
		$assign(pn, $(pkgId->substring(1))->replace(u'.', $File::separatorChar));
	} else {
		int32_t cp = pkgId->indexOf((int32_t)u':');
		$var($String, mn, pkgId->substring(0, cp));
		$init($File);
		$assign(pn, $str({mn, $$str($File::separatorChar), $($(pkgId->substring(cp + 1))->replace(u'.', $File::separatorChar))}));
	}
	return pn;
}

$String* Util::justPackageName($String* pkgName) {
	int32_t c = $nc(pkgName)->indexOf(":"_s);
	if (c == -1) {
		$throwNew($IllegalArgumentException, $$str({"Expected \':\' in package name ("_s, pkgName, ")"_s}));
	}
	return pkgName->substring(c + 1);
}

$String* Util::extractStringOption($String* opName, $String* s) {
	return extractStringOption(opName, s, nullptr);
}

$String* Util::extractStringOptionWithDelimiter($String* opName, $String* s, $String* deflt, char16_t delimiter) {
	int32_t p = $nc(s)->indexOf($$str({opName, "="_s}));
	if (p == -1) {
		return deflt;
	}
	p += $nc(opName)->length() + 1;
	int32_t pe = s->indexOf((int32_t)delimiter, p);
	if (pe == -1) {
		pe = s->length();
	}
	return s->substring(p, pe);
}

$String* Util::extractStringOption($String* opName, $String* s, $String* deflt) {
	return extractStringOptionWithDelimiter(opName, s, deflt, u',');
}

$String* Util::extractStringOptionLine($String* opName, $String* s, $String* deflt) {
	return $nc($(extractStringOptionWithDelimiter(opName, s, deflt, u'\n')))->strip();
}

bool Util::extractBooleanOption($String* opName, $String* s, bool deflt) {
	$var($String, str, extractStringOption(opName, s));
	return "true"_s->equals(str) ? true : "false"_s->equals(str) ? false : deflt;
}

int32_t Util::extractIntOption($String* opName, $String* s) {
	return extractIntOption(opName, s, 0);
}

int32_t Util::extractIntOption($String* opName, $String* s, int32_t deflt) {
	$useLocalCurrentObjectStackCache();
	int32_t p = $nc(s)->indexOf($$str({opName, "="_s}));
	if (p == -1) {
		return deflt;
	}
	p += $nc(opName)->length() + 1;
	int32_t pe = s->indexOf((int32_t)u',', p);
	if (pe == -1) {
		pe = s->length();
	}
	int32_t v = 0;
	try {
		v = $Integer::parseInt($(s->substring(p, pe)));
	} catch ($Exception& e) {
	}
	return v;
}

$String* Util::pkgNameOfClassName($String* fqClassName) {
	int32_t i = $nc(fqClassName)->lastIndexOf((int32_t)u'.');
	$var($String, pkg, i == -1 ? ""_s : fqClassName->substring(0, i));
	return $str({":"_s, pkg});
}

$String* Util::cleanSubOptions($Set* allowedSubOptions, $String* s) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($StringTokenizer, st, $new($StringTokenizer, s, ","_s));
	while (st->hasMoreTokens()) {
		$var($String, o, st->nextToken());
		int32_t p = $nc(o)->indexOf((int32_t)u'=');
		if (p > 0) {
			$var($String, key, o->substring(0, p));
			$var($String, val, o->substring(p + 1));
			if ($nc(allowedSubOptions)->contains(key)) {
				if (sb->length() > 0) {
					sb->append(u',');
				}
				sb->append($$str({key, "="_s, val}));
			}
		}
	}
	return sb->toString();
}

$Set* Util::set($StringArray* ss) {
	$useLocalCurrentObjectStackCache();
	$var($Set, set, $new($HashSet));
	set->addAll($($Arrays::asList(ss)));
	return set;
}

$String* Util::normalizeDriveLetter($String* file) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(file)->length() > 2;
	if (var$0 && file->charAt(1) == u':') {
		$var($String, var$1, $str($Character::toUpperCase(file->charAt(0))));
		return $concat(var$1, $(file->substring(1)));
	} else {
		bool var$5 = file->length() > 3;
		bool var$4 = var$5 && file->charAt(0) == u'*';
		if (var$4 && file->charAt(2) == u':') {
			$var($String, var$7, $(file->substring(0, 1)));
			$var($String, var$6, $$concat(var$7, $$str($Character::toUpperCase(file->charAt(1)))));
			return $concat(var$6, $(file->substring(2)));
		}
	}
	return file;
}

$String* Util::findServerSettings($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, args);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				if ($nc(s)->startsWith("--server:"_s)) {
					return s;
				}
			}
		}
	}
	return nullptr;
}

$Set* Util::union$($Set* s1, $Set* s2) {
	$var($Set, union$, $new($HashSet));
	union$->addAll(s1);
	union$->addAll(s2);
	return union$;
}

$Set* Util::subtract($Set* orig, $Set* toSubtract) {
	$var($Set, difference, $new($HashSet, static_cast<$Collection*>(orig)));
	difference->removeAll(toSubtract);
	return difference;
}

$String* Util::getStackTrace($Throwable* t) {
	$useLocalCurrentObjectStackCache();
	$var($StringWriter, sw, $new($StringWriter));
	$nc(t)->printStackTrace($$new($PrintWriter, static_cast<$Writer*>(sw)));
	return sw->toString();
}

$File* Util::pathToFile($Path* path) {
	return path == nullptr ? ($File*)nullptr : $nc(path)->toFile();
}

$Set* Util::intersection($Collection* c1, $Collection* c2) {
	$var($Set, intersection, $new($HashSet, c1));
	intersection->retainAll(c2);
	return intersection;
}

$Map* Util::indexBy($Collection* c, $Function* indexFunction) {
	$useLocalCurrentObjectStackCache();
	return $cast($Map, $nc($($nc(c)->stream()))->collect($($Collectors::toMap(indexFunction, static_cast<$Function*>($$new(Util$$Lambda$lambda$indexBy$0))))));
}

$String* Util::fileSuffix($Path* file) {
	$useLocalCurrentObjectStackCache();
	$var($String, fileNameStr, $nc($($nc(file)->getFileName()))->toString());
	int32_t dotIndex = $nc(fileNameStr)->indexOf((int32_t)u'.');
	return dotIndex == -1 ? ""_s : fileNameStr->substring(dotIndex);
}

$Stream* Util::getLines($String* str) {
	$useLocalCurrentObjectStackCache();
	return $nc(str)->isEmpty() ? $Stream::empty() : $Stream::of($($nc(str)->split($($Pattern::quote($($System::lineSeparator()))))));
}

$Object* Util::lambda$indexBy$0(Object$* o) {
	return $of(o);
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Util$$Lambda$lambda$indexBy$0::classInfo$.name)) {
			return Util$$Lambda$lambda$indexBy$0::load$(name, initialize);
		}
	}
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com