#include <sun/security/tools/jarsigner/Resources.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace tools {
			namespace jarsigner {

$FieldInfo _Resources_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources, contents)},
	{}
};

$MethodInfo _Resources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources::*)()>(&Resources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.jarsigner.Resources",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_FieldInfo_,
	_Resources_MethodInfo_
};

$Object* allocate$Resources($Class* clazz) {
	return $of($alloc(Resources));
}

$ObjectArray2* Resources::contents = nullptr;

void Resources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources::getContents() {
	return Resources::contents;
}

void clinit$Resources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("SPACE"_s),
			$of(" "_s)
		}),
		$$new($ObjectArray, {
			$of("6SPACE"_s),
			$of("      "_s)
		}),
		$$new($ObjectArray, {
			$of("COMMA"_s),
			$of(", "_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of("%s not a provider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of("Provider named \"%s\" not found"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of("Provider \"%s\" not found"_s)
		}),
		$$new($ObjectArray, {
			$of("jarsigner.error."_s),
			$of("jarsigner error: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of("Illegal option: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.option.is.forremoval"_s),
			$of("This option is deprecated and will be removed in a future release: "_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of("-keystore must be NONE if -storetype is {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.can.not.be.specified.if.storetype.is.{0}"_s),
			$of("-keypass can not be specified if -storetype is {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("If.protected.is.specified.then.storepass.and.keypass.must.not.be.specified"_s),
			$of("If -protected is specified, then -storepass and -keypass must not be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("If.keystore.is.not.password.protected.then.storepass.and.keypass.must.not.be.specified"_s),
			$of("If keystore is not password protected, then -storepass and -keypass must not be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.jarsigner.options.jar.file.alias"_s),
			$of("Usage: jarsigner [options] jar-file alias"_s)
		}),
		$$new($ObjectArray, {
			$of(".jarsigner.verify.options.jar.file.alias."_s),
			$of("       jarsigner -verify [options] jar-file [alias...]"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.url.keystore.location"_s),
			$of("[-keystore <url>]           keystore location"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepass.password.password.for.keystore.integrity"_s),
			$of("[-storepass <password>]     password for keystore integrity"_s)
		}),
		$$new($ObjectArray, {
			$of(".storetype.type.keystore.type"_s),
			$of("[-storetype <type>]         keystore type"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.password.password.for.private.key.if.different."_s),
			$of("[-keypass <password>]       password for private key (if different)"_s)
		}),
		$$new($ObjectArray, {
			$of(".certchain.file.name.of.alternative.certchain.file"_s),
			$of("[-certchain <file>]         name of alternative certchain file"_s)
		}),
		$$new($ObjectArray, {
			$of(".sigfile.file.name.of.SF.DSA.file"_s),
			$of("[-sigfile <file>]           name of .SF/.DSA file"_s)
		}),
		$$new($ObjectArray, {
			$of(".signedjar.file.name.of.signed.JAR.file"_s),
			$of("[-signedjar <file>]         name of signed JAR file"_s)
		}),
		$$new($ObjectArray, {
			$of(".digestalg.algorithm.name.of.digest.algorithm"_s),
			$of("[-digestalg <algorithm>]    name of digest algorithm"_s)
		}),
		$$new($ObjectArray, {
			$of(".sigalg.algorithm.name.of.signature.algorithm"_s),
			$of("[-sigalg <algorithm>]       name of signature algorithm"_s)
		}),
		$$new($ObjectArray, {
			$of(".verify.verify.a.signed.JAR.file"_s),
			$of("[-verify]                   verify a signed JAR file"_s)
		}),
		$$new($ObjectArray, {
			$of(".verbose.suboptions.verbose.output.when.signing.verifying."_s),
			$of("[-verbose[:suboptions]]     verbose output when signing/verifying."_s)
		}),
		$$new($ObjectArray, {
			$of(".suboptions.can.be.all.grouped.or.summary"_s),
			$of("                            suboptions can be all, grouped or summary"_s)
		}),
		$$new($ObjectArray, {
			$of(".certs.display.certificates.when.verbose.and.verifying"_s),
			$of("[-certs]                    display certificates when verbose and verifying"_s)
		}),
		$$new($ObjectArray, {
			$of(".certs.revocation.check"_s),
			$of("[-revCheck]                 Enable certificate revocation check"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsa.url.location.of.the.Timestamping.Authority"_s),
			$of("[-tsa <url>]                location of the Timestamping Authority"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsacert.alias.public.key.certificate.for.Timestamping.Authority"_s),
			$of("[-tsacert <alias>]          public key certificate for Timestamping Authority"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsapolicyid.tsapolicyid.for.Timestamping.Authority"_s),
			$of("[-tsapolicyid <oid>]        TSAPolicyID for Timestamping Authority"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsadigestalg.algorithm.of.digest.data.in.timestamping.request"_s),
			$of("[-tsadigestalg <algorithm>] algorithm of digest data in timestamping request"_s)
		}),
		$$new($ObjectArray, {
			$of(".altsigner.class.class.name.of.an.alternative.signing.mechanism"_s),
			$of("[-altsigner <class>]        class name of an alternative signing mechanism\n                            (This option is deprecated and will be removed in a future release.)"_s)
		}),
		$$new($ObjectArray, {
			$of(".altsignerpath.pathlist.location.of.an.alternative.signing.mechanism"_s),
			$of("[-altsignerpath <pathlist>] location of an alternative signing mechanism\n                            (This option is deprecated and will be removed in a future release.)"_s)
		}),
		$$new($ObjectArray, {
			$of(".internalsf.include.the.SF.file.inside.the.signature.block"_s),
			$of("[-internalsf]               include the .SF file inside the signature block"_s)
		}),
		$$new($ObjectArray, {
			$of(".sectionsonly.don.t.compute.hash.of.entire.manifest"_s),
			$of("[-sectionsonly]             don\'t compute hash of entire manifest"_s)
		}),
		$$new($ObjectArray, {
			$of(".protected.keystore.has.protected.authentication.path"_s),
			$of("[-protected]                keystore has protected authentication path"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerName.name.provider.name"_s),
			$of("[-providerName <name>]      provider name"_s)
		}),
		$$new($ObjectArray, {
			$of(".add.provider.option"_s),
			$of("[-addprovider <name>        add security provider by name (e.g. SunPKCS11)"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerArg.option.1"_s),
			$of("  [-providerArg <arg>]] ... configure argument for -addprovider"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerClass.option"_s),
			$of("[-providerClass <class>     add security provider by fully-qualified class name"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerArg.option.2"_s),
			$of("  [-providerArg <arg>]] ... configure argument for -providerClass"_s)
		}),
		$$new($ObjectArray, {
			$of(".strict.treat.warnings.as.errors"_s),
			$of("[-strict]                   treat warnings as errors"_s)
		}),
		$$new($ObjectArray, {
			$of(".conf.url.specify.a.pre.configured.options.file"_s),
			$of("[-conf <url>]               specify a pre-configured options file"_s)
		}),
		$$new($ObjectArray, {
			$of(".print.this.help.message"_s),
			$of("[-? -h --help]              Print this help message"_s)
		}),
		$$new($ObjectArray, {
			$of("Option.lacks.argument"_s),
			$of("Option lacks argument"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.type.jarsigner.help.for.usage"_s),
			$of("Please type jarsigner --help for usage"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.jarfile.name"_s),
			$of("Please specify jarfile name"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.alias.name"_s),
			$of("Please specify alias name"_s)
		}),
		$$new($ObjectArray, {
			$of("Only.one.alias.can.be.specified"_s),
			$of("Only one alias can be specified"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.signed.entries.which.is.not.signed.by.the.specified.alias.es."_s),
			$of("This jar contains signed entries which are not signed by the specified alias(es)."_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.signed.entries.that.s.not.signed.by.alias.in.this.keystore."_s),
			$of("This jar contains signed entries that are not signed by alias in this keystore."_s)
		}),
		$$new($ObjectArray, {
			$of("s"_s),
			$of("s"_s)
		}),
		$$new($ObjectArray, {
			$of("m"_s),
			$of("m"_s)
		}),
		$$new($ObjectArray, {
			$of("k"_s),
			$of("k"_s)
		}),
		$$new($ObjectArray, {
			$of("X"_s),
			$of("X"_s)
		}),
		$$new($ObjectArray, {
			$of("q"_s),
			$of("?"_s)
		}),
		$$new($ObjectArray, {
			$of(".and.d.more."_s),
			$of("(and %d more)"_s)
		}),
		$$new($ObjectArray, {
			$of(".s.signature.was.verified."_s),
			$of("  s = signature was verified "_s)
		}),
		$$new($ObjectArray, {
			$of(".m.entry.is.listed.in.manifest"_s),
			$of("  m = entry is listed in manifest"_s)
		}),
		$$new($ObjectArray, {
			$of(".k.at.least.one.certificate.was.found.in.keystore"_s),
			$of("  k = at least one certificate was found in keystore"_s)
		}),
		$$new($ObjectArray, {
			$of(".X.not.signed.by.specified.alias.es."_s),
			$of("  X = not signed by specified alias(es)"_s)
		}),
		$$new($ObjectArray, {
			$of(".q.unsigned.entry"_s),
			$of("  ? = unsigned entry"_s)
		}),
		$$new($ObjectArray, {
			$of("no.manifest."_s),
			$of("no manifest."_s)
		}),
		$$new($ObjectArray, {
			$of(".Signature.related.entries."_s),
			$of("(Signature related entries)"_s)
		}),
		$$new($ObjectArray, {
			$of(".Unsigned.entries."_s),
			$of("(Unsigned entries)"_s)
		}),
		$$new($ObjectArray, {
			$of(".Directory.entries."_s),
			$of("(Directory entries)"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.is.unsigned"_s),
			$of("jar is unsigned."_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned"_s),
			$of("WARNING: Signature is either not parsable or not verifiable, and the jar will be treated as unsigned. For more information, re-run jarsigner with debug enabled (-J-Djava.security.debug=jar)."_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned.see.weak"_s),
			$of("The jar will be treated as unsigned, because it is signed with a weak algorithm that is now disabled.\n\nRe-run jarsigner with the -verbose option for more details."_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned.see.weak.verbose"_s),
			$of("WARNING: The jar will be treated as unsigned, because it is signed with a weak algorithm that is now disabled by the security property:"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.signed."_s),
			$of("jar signed."_s)
		}),
		$$new($ObjectArray, {
			$of("jar.signed.with.signer.errors."_s),
			$of("jar signed, with signer errors."_s)
		}),
		$$new($ObjectArray, {
			$of("jar.verified."_s),
			$of("jar verified."_s)
		}),
		$$new($ObjectArray, {
			$of("jar.verified.with.signer.errors."_s),
			$of("jar verified, with signer errors."_s)
		}),
		$$new($ObjectArray, {
			$of("history.with.ts"_s),
			$of("- Signed by \"%1$s\"\n    Digest algorithm: %2$s\n    Signature algorithm: %3$s, %4$s\n  Timestamped by \"%6$s\" on %5$tc\n    Timestamp digest algorithm: %7$s\n    Timestamp signature algorithm: %8$s, %9$s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.without.ts"_s),
			$of("- Signed by \"%1$s\"\n    Digest algorithm: %2$s\n    Signature algorithm: %3$s, %4$s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.unparsable"_s),
			$of("- Unparsable signature-related file %s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.nosf"_s),
			$of("- Missing signature-related file META-INF/%s.SF"_s)
		}),
		$$new($ObjectArray, {
			$of("history.nobk"_s),
			$of("- Missing block file for signature-related file META-INF/%s.SF"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of("%s (weak)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of("%s (disabled)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of("%d-bit key"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of("%d-bit key (weak)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of("%d-bit key (disabled)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size"_s),
			$of("unknown size"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.attributes.detected"_s),
			$of("POSIX file permission and/or symlink attributes detected. These attributes are ignored when signing and are not protected by the signature."_s)
		}),
		$$new($ObjectArray, {
			$of("jarsigner."_s),
			$of("jarsigner: "_s)
		}),
		$$new($ObjectArray, {
			$of("signature.filename.must.consist.of.the.following.characters.A.Z.0.9.or."_s),
			$of("signature filename must consist of the following characters: A-Z, 0-9, _ or -"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.open.jar.file."_s),
			$of("unable to open jar file: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.create."_s),
			$of("unable to create: "_s)
		}),
		$$new($ObjectArray, {
			$of(".adding."_s),
			$of("   adding: "_s)
		}),
		$$new($ObjectArray, {
			$of(".updating."_s),
			$of(" updating: "_s)
		}),
		$$new($ObjectArray, {
			$of(".signing."_s),
			$of("  signing: "_s)
		}),
		$$new($ObjectArray, {
			$of("attempt.to.rename.signedJarFile.to.jarFile.failed"_s),
			$of("attempt to rename {0} to {1} failed"_s)
		}),
		$$new($ObjectArray, {
			$of("attempt.to.rename.jarFile.to.origJar.failed"_s),
			$of("attempt to rename {0} to {1} failed"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.sign.jar."_s),
			$of("unable to sign jar: "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.Passphrase.for.keystore."_s),
			$of("Enter Passphrase for keystore: "_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.load."_s),
			$of("keystore load: "_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.exception."_s),
			$of("certificate exception: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.keystore.class."_s),
			$of("unable to instantiate keystore class: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.not.found.for.alias.alias.must.reference.a.valid.KeyStore.key.entry.containing.a.private.key.and"_s),
			$of("Certificate chain not found for: {0}.  {1} must reference a valid KeyStore key entry containing a private key and corresponding public key certificate chain."_s)
		}),
		$$new($ObjectArray, {
			$of("File.specified.by.certchain.does.not.exist"_s),
			$of("File specified by -certchain does not exist"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.restore.certchain.from.file.specified"_s),
			$of("Cannot restore certchain from file specified"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.not.found.in.the.file.specified."_s),
			$of("Certificate chain not found in the file specified."_s)
		}),
		$$new($ObjectArray, {
			$of("found.non.X.509.certificate.in.signer.s.chain"_s),
			$of("found non-X.509 certificate in signer\'s chain"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of("Enter key password for {0}: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.recover.key.from.keystore"_s),
			$of("unable to recover key from keystore"_s)
		}),
		$$new($ObjectArray, {
			$of("key.associated.with.alias.not.a.private.key"_s),
			$of("key associated with {0} not a private key"_s)
		}),
		$$new($ObjectArray, {
			$of("you.must.enter.key.password"_s),
			$of("you must enter key password"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.read.password."_s),
			$of("unable to read password: "_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.is.valid.from"_s),
			$of("certificate is valid from {0} to {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.expired.on"_s),
			$of("certificate expired on {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.is.not.valid.until"_s),
			$of("certificate is not valid until {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.will.expire.on"_s),
			$of("certificate will expire on {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(".Invalid.certificate.chain."_s),
			$of("[Invalid certificate chain: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Invalid.TSA.certificate.chain."_s),
			$of("[Invalid TSA certificate chain: "_s)
		}),
		$$new($ObjectArray, {
			$of("requesting.a.signature.timestamp"_s),
			$of("requesting a signature timestamp"_s)
		}),
		$$new($ObjectArray, {
			$of("TSA.location."_s),
			$of("TSA location: "_s)
		}),
		$$new($ObjectArray, {
			$of("TSA.certificate."_s),
			$of("TSA certificate: "_s)
		}),
		$$new($ObjectArray, {
			$of("no.response.from.the.Timestamping.Authority."_s),
			$of("no response from the Timestamping Authority. When connecting from behind a firewall an HTTP or HTTPS proxy may need to be specified. Supply the following options to jarsigner:"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("or"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.found.for.alias.alias.must.reference.a.valid.KeyStore.entry.containing.an.X.509.public.key.certificate.for.the"_s),
			$of("Certificate not found for: {0}.  {1} must reference a valid KeyStore entry containing an X.509 public key certificate for the Timestamping Authority."_s)
		}),
		$$new($ObjectArray, {
			$of("using.an.alternative.signing.mechanism"_s),
			$of("using an alternative signing mechanism"_s)
		}),
		$$new($ObjectArray, {
			$of("entry.was.signed.on"_s),
			$of("entry was signed on {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning."_s),
			$of("Warning: "_s)
		}),
		$$new($ObjectArray, {
			$of("Error."_s),
			$of("Error: "_s)
		}),
		$$new($ObjectArray, {
			$of("...Signer"_s),
			$of(">>> Signer"_s)
		}),
		$$new($ObjectArray, {
			$of("...TSA"_s),
			$of(">>> TSA"_s)
		}),
		$$new($ObjectArray, {
			$of("trusted.certificate"_s),
			$of("trusted certificate"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.unsigned.entries.which.have.not.been.integrity.checked."_s),
			$of("This jar contains unsigned entries which have not been integrity-checked. "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.has.expired."_s),
			$of("This jar contains entries whose signer certificate has expired. "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.will.expire.within.six.months."_s),
			$of("This jar contains entries whose signer certificate will expire within six months. "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.is.not.yet.valid."_s),
			$of("This jar contains entries whose signer certificate is not yet valid. "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.is.self.signed."_s),
			$of("This jar contains entries whose signer certificate is self-signed."_s)
		}),
		$$new($ObjectArray, {
			$of("Re.run.with.the.verbose.and.certs.options.for.more.details."_s),
			$of("Re-run with the -verbose and -certs options for more details."_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.has.expired."_s),
			$of("The signer certificate has expired."_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.expired.1.but.usable.2"_s),
			$of("The timestamp expired on %1$tY-%1$tm-%1$td. However, the JAR will be valid until the signer certificate expires on %2$tY-%2$tm-%2$td."_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.has.expired."_s),
			$of("The timestamp has expired."_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.will.expire.within.six.months."_s),
			$of("The signer certificate will expire within six months."_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.within.one.year.on.1"_s),
			$of("The timestamp will expire within one year on %1$tY-%1$tm-%1$td."_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.within.one.year.on.1.but.2"_s),
			$of("The timestamp will expire within one year on %1$tY-%1$tm-%1$td. However, the JAR will be valid until the signer certificate expires on %2$tY-%2$tm-%2$td."_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.is.not.yet.valid."_s),
			$of("The signer certificate is not yet valid."_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of("The signer certificate\'s KeyUsage extension doesn\'t allow code signing."_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of("The signer certificate\'s ExtendedKeyUsage extension doesn\'t allow code signing."_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s),
			$of("The signer certificate\'s NetscapeCertType extension doesn\'t allow code signing."_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of("This jar contains entries whose signer certificate\'s KeyUsage extension doesn\'t allow code signing."_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of("This jar contains entries whose signer certificate\'s ExtendedKeyUsage extension doesn\'t allow code signing."_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s),
			$of("This jar contains entries whose signer certificate\'s NetscapeCertType extension doesn\'t allow code signing."_s)
		}),
		$$new($ObjectArray, {
			$of(".{0}.extension.does.not.support.code.signing."_s),
			$of("[{0} extension does not support code signing]"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.s.certificate.chain.is.invalid.reason.1"_s),
			$of("The signer\'s certificate chain is invalid. Reason: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.tsa.certificate.chain.is.invalid.reason.1"_s),
			$of("The TSA certificate chain is invalid. Reason: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.s.certificate.is.self.signed."_s),
			$of("The signer\'s certificate is self-signed."_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of("The %1$s algorithm specified for the %2$s option is considered a security risk. This algorithm will be disabled in a future update."_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s),
			$of("The %1$s algorithm specified for the %2$s option is considered a security risk and is disabled."_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of("The %1$s timestamp digest algorithm is considered a security risk. This algorithm will be disabled in a future update."_s)
		}),
		$$new($ObjectArray, {
			$of("The.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of("The %1$s digest algorithm is considered a security risk. This algorithm will be disabled in a future update."_s)
		}),
		$$new($ObjectArray, {
			$of("The.signature.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of("The %1$s signature algorithm is considered a security risk. This algorithm will be disabled in a future update."_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s),
			$of("The %1$s signing key has a keysize of %2$d which is considered a security risk. This key size will be disabled in a future update."_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk.and.is.disabled."_s),
			$of("The %1$s signing key has a keysize of %2$d which is considered a security risk and is disabled."_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.certificate.chain.is.invalid.reason.1"_s),
			$of("This jar contains entries whose certificate chain is invalid. Reason: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.tsa.certificate.chain.is.invalid.reason.1"_s),
			$of("This jar contains entries whose TSA certificate chain is invalid. Reason: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("no.timestamp.signing"_s),
			$of("No -tsa or -tsacert is provided and this jar is not timestamped. Without a timestamp, users may not be able to validate this jar after the signer certificate\'s expiration date (%1$tY-%1$tm-%1$td)."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.timestamp.signing"_s),
			$of("The timestamp is invalid. Without a valid timestamp, users may not be able to validate this jar after the signer certificate\'s expiration date (%1$tY-%1$tm-%1$td)."_s)
		}),
		$$new($ObjectArray, {
			$of("no.timestamp.verifying"_s),
			$of("This jar contains signatures that do not include a timestamp. Without a timestamp, users may not be able to validate this jar after any of the signer certificates expire (as early as %1$tY-%1$tm-%1$td)."_s)
		}),
		$$new($ObjectArray, {
			$of("bad.timestamp.verifying"_s),
			$of("This jar contains signatures that include an invalid timestamp. Without a valid timestamp, users may not be able to validate this jar after any of the signer certificates expire (as early as %1$tY-%1$tm-%1$td).\nRerun jarsigner with -J-Djava.security.debug=jar for more information."_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.will.expire.on.1."_s),
			$of("The signer certificate will expire on %1$tY-%1$tm-%1$td."_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.on.1."_s),
			$of("The timestamp will expire on %1$tY-%1$tm-%1$td."_s)
		}),
		$$new($ObjectArray, {
			$of("signer.cert.expired.1.but.timestamp.good.2."_s),
			$of("The signer certificate expired on %1$tY-%1$tm-%1$td. However, the JAR will be valid until the timestamp expires on %2$tY-%2$tm-%2$td."_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of("Unknown password type: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of("Cannot find environment variable: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of("Cannot find file: "_s)
		}),
		$$new($ObjectArray, {
			$of("event.ocsp.check"_s),
			$of("Contacting OCSP server at %s ..."_s)
		}),
		$$new($ObjectArray, {
			$of("event.crl.check"_s),
			$of("Downloading CRL from %s ..."_s)
		})
	}));
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$loadClass(Resources, name, initialize, &_Resources_ClassInfo_, clinit$Resources, allocate$Resources);
	return class$;
}

$Class* Resources::class$ = nullptr;

			} // jarsigner
		} // tools
	} // security
} // sun