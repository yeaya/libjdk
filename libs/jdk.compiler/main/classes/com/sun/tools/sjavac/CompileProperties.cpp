#include <com/sun/tools/sjavac/CompileProperties.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/net/URI.h>
#include <java/text/MessageFormat.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef FORMAT

using $Log = ::com::sun::tools::sjavac::Log;
using $Util = ::com::sun::tools::sjavac::Util;
using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $MessageFormat = ::java::text::MessageFormat;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$String* CompileProperties::FORMAT = nullptr;
$chars* CompileProperties::hexDigit = nullptr;

void CompileProperties::init$() {
}

void CompileProperties::setExtra($String* e) {
	$set(this, extra, e);
}

void CompileProperties::setExtra($Options* a) {
}

bool CompileProperties::transform($CompilationService* compilationService, $Map* pkgSrcs, $Set* visibleSrcs, $Map* oldPackageDependents, $URI* destRoot, $Map* packageArtifacts, $Map* packageDependencies, $Map* packageCpDependencies, $Map* packagePublicApis, $Map* dependencyPublicApis, int32_t debugLevel, bool incremental, int32_t numCores) {
	$useLocalObjectStack();
	bool rc = true;
	{
		$var($Iterator, i$, $$nc($nc(pkgSrcs)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pkgName, $cast($String, i$->next()));
			{
				$var($String, pkgNameF, $Util::toFileSystemPath(pkgName));
				{
					$var($Iterator, i$, $$sure($Set, pkgSrcs->get(pkgName))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($URI, u, $cast($URI, i$->next()));
						{
							$var($File, src, $new($File, u));
							bool r = compile(pkgName, pkgNameF, src, $$new($File, destRoot), debugLevel, packageArtifacts);
							if (r == false) {
								rc = false;
							}
						}
					}
				}
			}
		}
	}
	return rc;
}

bool CompileProperties::compile($String* pkgName, $String* pkgNameF, $File* src, $File* destRoot, int32_t debugLevel, $Map* packageArtifacts) {
	$useLocalObjectStack();
	$var($String, superClass, "java.util.ListResourceBundle"_s);
	if (this->extra != nullptr) {
		$assign(superClass, this->extra);
	}
	$var($Properties, p, $new($Properties));
	try {
		p->load($$new($FileInputStream, src));
	} catch ($IOException& e) {
		$Log::error($$str({"Error reading file "_s, $($nc(src)->getPath())}));
		return false;
	}
	int32_t dp = $$nc($nc(src)->getName())->lastIndexOf("."_s);
	$var($String, classname, $$nc(src->getName())->substring(0, dp));
	$var($List, sortedKeys, $new($ArrayList));
	{
		$var($Iterator, i$, $$nc(p->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				sortedKeys->add($cast($String, key));
			}
		}
	}
	$Collections::sort(sortedKeys);
	$var($Iterator, keys, sortedKeys->iterator());
	$var($StringBuilder, data, $new($StringBuilder));
	while ($nc(keys)->hasNext()) {
		$var($String, key, $cast($String, keys->next()));
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("            { \""_s);
		var$0->append($(escape(key)));
		var$0->append("\", \""_s);
		var$0->append($(escape($$cast($String, p->get(key)))));
		var$0->append("\" },\n"_s);
		data->append($$str(var$0));
	}
	$var($String, destFilename, $str({$($nc(destRoot)->getPath()), $File::separator, pkgNameF, $File::separator, classname, ".java"_s}));
	$var($File, dest, $new($File, destFilename));
	if (!$$nc(dest->getParentFile())->isDirectory()) {
		if (!$$nc(dest->getParentFile())->mkdirs()) {
			$Log::error($$str({"Could not create the directory "_s, $($$nc(dest->getParentFile())->getPath())}));
			return false;
		}
	}
	$var($Set, as, $cast($Set, $nc(packageArtifacts)->get(pkgName)));
	if (as == nullptr) {
		$assign(as, $new($HashSet));
		packageArtifacts->put(pkgName, as);
	}
	$nc(as)->add($(dest->toURI()));
	bool var$1 = dest->exists();
	if (var$1) {
		int64_t var$2 = dest->lastModified();
		var$1 = var$2 > src->lastModified();
	}
	if (var$1) {
		return true;
	}
	$var($String, packageString, $str({"package "_s, $($nc(pkgNameF)->replace($File::separatorChar, u'.')), ";\n\n"_s}));
	$Log::info($$str({"Compiling property file "_s, pkgNameF, $File::separator, $(src->getName())}));
	try {
		$var($Writer, writer, $new($BufferedWriter, $$new($OutputStreamWriter, $$new($FileOutputStream, dest))));
		$var($Throwable, var$3, nullptr);
		try {
			try {
				$var($MessageFormat, format, $new($MessageFormat, CompileProperties::FORMAT));
				writer->write($(format->format($$new($ObjectArray, {
					packageString,
					classname,
					superClass,
					data
				}))));
			} catch ($Throwable& t$) {
				try {
					writer->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$4) {
			$assign(var$3, var$4);
		} /*finally*/ {
			writer->close();
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	} catch ($IOException& e) {
		$Log::error($$str({"Could not write file "_s, $(dest->getPath())}));
		return false;
	}
	return true;
}

$String* CompileProperties::escape($String* theString) {
	$init(CompileProperties);
	int32_t len = $nc(theString)->length();
	$var($StringBuilder, outBuffer, $new($StringBuilder, len * 2));
	for (int32_t x = 0; x < len; ++x) {
		char16_t aChar = theString->charAt(x);
		switch (aChar) {
		case u'\\':
			outBuffer->append(u'\\');
			outBuffer->append(u'\\');
			break;
		case u'\t':
			outBuffer->append(u'\\');
			outBuffer->append(u't');
			break;
		case u'\n':
			outBuffer->append(u'\\');
			outBuffer->append(u'n');
			break;
		case u'\r':
			outBuffer->append(u'\\');
			outBuffer->append(u'r');
			break;
		case u'\f':
			outBuffer->append(u'\\');
			outBuffer->append(u'f');
			break;
		default:
			if ((aChar < 32) || (aChar > 126)) {
				outBuffer->append(u'\\');
				outBuffer->append(u'u');
				outBuffer->append(toHex((aChar >> 12) & 0x0f));
				outBuffer->append(toHex((aChar >> 8) & 0x0f));
				outBuffer->append(toHex((aChar >> 4) & 0x0f));
				outBuffer->append(toHex(aChar & 0x0f));
			} else {
				if (aChar == u'\"') {
					outBuffer->append(u'\\');
				}
				outBuffer->append(aChar);
			}
		}
	}
	return outBuffer->toString();
}

char16_t CompileProperties::toHex(int32_t nibble) {
	$init(CompileProperties);
	return CompileProperties::hexDigit->get(nibble & 0x0f);
}

void CompileProperties::clinit$($Class* clazz) {
	$assignStatic(CompileProperties::FORMAT, "{0}public final class {1} extends {2} \'{\'\n    protected final Object[][] getContents() \'{\'\n        return new Object[][] \'{\'\n{3}        };\n    }\n}\n"_s);
	$assignStatic(CompileProperties::hexDigit, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F'
	}));
}

CompileProperties::CompileProperties() {
}

$Class* CompileProperties::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"extra", "Ljava/lang/String;", nullptr, 0, $field(CompileProperties, extra)},
		{"FORMAT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CompileProperties, FORMAT)},
		{"hexDigit", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CompileProperties, hexDigit)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompileProperties, init$, void)},
		{"compile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;Ljava/io/File;ILjava/util/Map;)Z", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;Ljava/io/File;ILjava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;)Z", 0, $virtualMethod(CompileProperties, compile, bool, $String*, $String*, $File*, $File*, int32_t, $Map*)},
		{"escape", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompileProperties, escape, $String*, $String*)},
		{"setExtra", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CompileProperties, setExtra, void, $String*)},
		{"setExtra", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC, $virtualMethod(CompileProperties, setExtra, void, $Options*)},
		{"toHex", "(I)C", nullptr, $PRIVATE | $STATIC, $staticMethod(CompileProperties, toHex, char16_t, int32_t)},
		{"transform", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;Ljava/net/URI;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;IZI)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Set<Ljava/net/URI;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;IZI)Z", $PUBLIC, $virtualMethod(CompileProperties, transform, bool, $CompilationService*, $Map*, $Set*, $Map*, $URI*, $Map*, $Map*, $Map*, $Map*, $Map*, int32_t, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.CompileProperties",
		"java.lang.Object",
		"com.sun.tools.sjavac.Transformer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompileProperties, name, initialize, &classInfo$$, CompileProperties::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CompileProperties);
	});
	return class$;
}

$Class* CompileProperties::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com