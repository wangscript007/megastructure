// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

#ifndef W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_HXX
#define W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_HXX

#include <xsde/cxx/version.hxx>

#if (XSDE_INT_VERSION != 3020000L)
#error XSD/e runtime version mismatch
#endif

#include <xsde/cxx/config.hxx>

#ifndef XSDE_ENCODING_UTF8
#error the generated code uses the UTF-8 encodingwhile the XSD/e runtime does not (reconfigure the runtime or change the --char-encoding value)
#endif

#ifndef XSDE_STL
#error the generated code uses STL while the XSD/e runtime does not (reconfigure the runtime or add --no-stl)
#endif

#ifndef XSDE_EXCEPTIONS
#error the generated code uses exceptions while the XSD/e runtime does not (reconfigure the runtime or add --no-exceptions)
#endif

#ifdef XSDE_LONGLONG
#error the XSD/e runtime uses long long while the generated code does not (reconfigure the runtime or remove --no-long-long)
#endif

#ifdef XSDE_CUSTOM_ALLOCATOR
#error the XSD/e runtime uses custom allocator while the generated code does not (reconfigure the runtime or add --custom-allocator)
#endif

#include <xsde/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include <string>
#include <xsde/cxx/hybrid/xml-schema.hxx>
#include <xsde/cxx/hybrid/sequence.hxx>

namespace xml_schema
{
  using ::xsde::cxx::hybrid::any_type;
  typedef ::std::string any_simple_type;

  typedef signed char byte;
  using ::xsde::cxx::hybrid::byte_base;

  typedef unsigned char unsigned_byte;
  using ::xsde::cxx::hybrid::unsigned_byte_base;

  typedef short short_;
  using ::xsde::cxx::hybrid::short_base;

  typedef unsigned short unsigned_short;
  using ::xsde::cxx::hybrid::unsigned_short_base;

  typedef int int_;
  using ::xsde::cxx::hybrid::int_base;

  typedef unsigned int unsigned_int;
  using ::xsde::cxx::hybrid::unsigned_int_base;

  typedef long long_;
  using ::xsde::cxx::hybrid::long_base;

  typedef unsigned long unsigned_long;
  using ::xsde::cxx::hybrid::unsigned_long_base;

  typedef long integer;
  using ::xsde::cxx::hybrid::integer_base;

  typedef long non_positive_integer;
  using ::xsde::cxx::hybrid::non_positive_integer_base;

  typedef unsigned long non_negative_integer;
  using ::xsde::cxx::hybrid::non_negative_integer_base;

  typedef unsigned long positive_integer;
  using ::xsde::cxx::hybrid::positive_integer_base;

  typedef long negative_integer;
  using ::xsde::cxx::hybrid::negative_integer_base;

  typedef bool boolean;
  using ::xsde::cxx::hybrid::boolean_base;

  typedef float float_;
  using ::xsde::cxx::hybrid::float_base;

  typedef double double_;
  using ::xsde::cxx::hybrid::double_base;

  typedef double decimal;
  using ::xsde::cxx::hybrid::decimal_base;

  typedef ::std::string string;

  typedef ::std::string normalized_string;

  typedef ::std::string token;

  typedef ::std::string name;

  typedef ::std::string nmtoken;

  typedef ::xsde::cxx::string_sequence nmtokens;

  typedef ::std::string ncname;

  typedef ::std::string language;

  typedef ::std::string id;

  typedef ::std::string idref;

  typedef ::xsde::cxx::string_sequence idrefs;

  typedef ::std::string uri;

  using ::xsde::cxx::qname;

  using ::xsde::cxx::buffer;
  typedef ::xsde::cxx::buffer base64_binary;
  typedef ::xsde::cxx::buffer hex_binary;

  using ::xsde::cxx::time_zone;
  using ::xsde::cxx::date;
  using ::xsde::cxx::date_time;
  using ::xsde::cxx::duration;
  using ::xsde::cxx::gday;
  using ::xsde::cxx::gmonth;
  using ::xsde::cxx::gmonth_day;
  using ::xsde::cxx::gyear;
  using ::xsde::cxx::gyear_month;
  using ::xsde::cxx::time;

  using ::xsde::cxx::hybrid::pod_sequence;
  using ::xsde::cxx::hybrid::fix_sequence;
  using ::xsde::cxx::hybrid::var_sequence;
  using ::xsde::cxx::string_sequence;
  using ::xsde::cxx::hybrid::data_sequence;
}

namespace megaxml
{
  class Package;
  class Host;
  class Defaults;
  class Build;
  class Project;
  class Files;
  class EG;
  class Directories;
  class Run;
}


namespace megaxml
{
  // Package (variable-length)
  //
  class Package
  {
    private:
    Package (const Package&);
    Package& operator= (const Package&);

    public:
    Package ();

    ~Package ();

    // Name
    //
    const ::std::string&
    Name () const;

    ::std::string&
    Name ();

    void
    Name (const ::std::string&);

    // Type
    //
    const ::std::string&
    Type () const;

    ::std::string&
    Type ();

    void
    Type (const ::std::string&);

    // Directories
    //
    bool
    Directories_present () const;

    const ::megaxml::Directories&
    Directories () const;

    ::megaxml::Directories&
    Directories ();

    void
    Directories (::megaxml::Directories*);

    // Files
    //
    bool
    Files_present () const;

    const ::megaxml::Files&
    Files () const;

    ::megaxml::Files&
    Files ();

    void
    Files (::megaxml::Files*);

    // Command
    //
    typedef ::xsde::cxx::string_sequence Command_sequence;
    typedef Command_sequence::iterator Command_iterator;
    typedef Command_sequence::const_iterator Command_const_iterator;

    const Command_sequence&
    Command () const;

    Command_sequence&
    Command ();

    private:
    ::std::string Name_;
    ::std::string Type_;
    ::megaxml::Directories* Directories_;
    ::megaxml::Files* Files_;
    Command_sequence Command_;
  };

  // Host (variable-length)
  //
  class Host: public ::megaxml::Package
  {
    private:
    Host (const Host&);
    Host& operator= (const Host&);

    public:
    Host ();

    ~Host ();

    private:
  };

  // Defaults (fixed-length)
  //
  class Defaults
  {
    public:
    Defaults ();

    Defaults (const Defaults&);
    Defaults& operator= (const Defaults&);

    ~Defaults ();

    private:
  };

  // Build (fixed-length)
  //
  class Build
  {
    public:
    Build ();

    Build (const Build&);
    Build& operator= (const Build&);

    ~Build ();

    // Name
    //
    const ::std::string&
    Name () const;

    ::std::string&
    Name ();

    void
    Name (const ::std::string&);

    // CompilerFlags
    //
    const ::std::string&
    CompilerFlags () const;

    ::std::string&
    CompilerFlags ();

    void
    CompilerFlags (const ::std::string&);

    // LinkerFlags
    //
    const ::std::string&
    LinkerFlags () const;

    ::std::string&
    LinkerFlags ();

    void
    LinkerFlags (const ::std::string&);

    private:
    ::std::string Name_;
    ::std::string CompilerFlags_;
    ::std::string LinkerFlags_;
  };

  // Project (variable-length)
  //
  class Project
  {
    private:
    Project (const Project&);
    Project& operator= (const Project&);

    public:
    Project ();

    ~Project ();

    // Host
    //
    const ::std::string&
    Host () const;

    ::std::string&
    Host ();

    void
    Host (const ::std::string&);

    // Description
    //
    bool
    Description_present () const;

    void
    Description_present (bool);

    const ::std::string&
    Description () const;

    ::std::string&
    Description ();

    void
    Description (const ::std::string&);

    // Package
    //
    typedef ::xsde::cxx::string_sequence Package_sequence;
    typedef Package_sequence::iterator Package_iterator;
    typedef Package_sequence::const_iterator Package_const_iterator;

    const Package_sequence&
    Package () const;

    Package_sequence&
    Package ();

    // Files
    //
    bool
    Files_present () const;

    const ::megaxml::Files&
    Files () const;

    ::megaxml::Files&
    Files ();

    void
    Files (::megaxml::Files*);

    // Build
    //
    typedef ::xsde::cxx::hybrid::fix_sequence< ::megaxml::Build > Build_sequence;
    typedef Build_sequence::iterator Build_iterator;
    typedef Build_sequence::const_iterator Build_const_iterator;

    const Build_sequence&
    Build () const;

    Build_sequence&
    Build ();

    // Run
    //
    typedef ::xsde::cxx::hybrid::var_sequence< ::megaxml::Run > Run_sequence;
    typedef Run_sequence::iterator Run_iterator;
    typedef Run_sequence::const_iterator Run_const_iterator;

    const Run_sequence&
    Run () const;

    Run_sequence&
    Run ();

    // Defaults
    //
    bool
    Defaults_present () const;

    void
    Defaults_present (bool);

    const ::megaxml::Defaults&
    Defaults () const;

    ::megaxml::Defaults&
    Defaults ();

    void
    Defaults (const ::megaxml::Defaults&);

    private:
    ::std::string Host_;
    ::std::string Description_;
    unsigned char Description_present_;
    Package_sequence Package_;
    ::megaxml::Files* Files_;
    Build_sequence Build_;
    Run_sequence Run_;
    ::megaxml::Defaults Defaults_;
    unsigned char Defaults_present_;
  };

  // Files (variable-length)
  //
  class Files
  {
    private:
    Files (const Files&);
    Files& operator= (const Files&);

    public:
    Files ();

    ~Files ();

    // System
    //
    typedef ::xsde::cxx::string_sequence System_sequence;
    typedef System_sequence::iterator System_iterator;
    typedef System_sequence::const_iterator System_const_iterator;

    const System_sequence&
    System () const;

    System_sequence&
    System ();

    // Include
    //
    typedef ::xsde::cxx::string_sequence Include_sequence;
    typedef Include_sequence::iterator Include_iterator;
    typedef Include_sequence::const_iterator Include_const_iterator;

    const Include_sequence&
    Include () const;

    Include_sequence&
    Include ();

    // Source
    //
    typedef ::xsde::cxx::string_sequence Source_sequence;
    typedef Source_sequence::iterator Source_iterator;
    typedef Source_sequence::const_iterator Source_const_iterator;

    const Source_sequence&
    Source () const;

    Source_sequence&
    Source ();

    // Library
    //
    typedef ::xsde::cxx::string_sequence Library_sequence;
    typedef Library_sequence::iterator Library_iterator;
    typedef Library_sequence::const_iterator Library_const_iterator;

    const Library_sequence&
    Library () const;

    Library_sequence&
    Library ();

    private:
    System_sequence System_;
    Include_sequence Include_;
    Source_sequence Source_;
    Library_sequence Library_;
  };

  // EG (variable-length)
  //
  class EG
  {
    private:
    EG (const EG&);
    EG& operator= (const EG&);

    public:
    EG ();

    ~EG ();

    // choice
    //
    enum choice_arm_tag
    {
      Package_tag,
      Host_tag,
      Project_tag
    };

    choice_arm_tag
    choice_arm () const;

    void
    choice_arm (choice_arm_tag);

    // Package
    //
    const ::megaxml::Package&
    Package () const;

    ::megaxml::Package&
    Package ();

    void
    Package (::megaxml::Package*);

    // Host
    //
    const ::megaxml::Host&
    Host () const;

    ::megaxml::Host&
    Host ();

    void
    Host (::megaxml::Host*);

    // Project
    //
    const ::megaxml::Project&
    Project () const;

    ::megaxml::Project&
    Project ();

    void
    Project (::megaxml::Project*);

    private:
    union
    {
      ::megaxml::Package* Package_;
      ::megaxml::Host* Host_;
      ::megaxml::Project* Project_;
    } choice_;
    choice_arm_tag choice_arm_;
  };

  // Directories (variable-length)
  //
  class Directories
  {
    private:
    Directories (const Directories&);
    Directories& operator= (const Directories&);

    public:
    Directories ();

    ~Directories ();

    // Include
    //
    typedef ::xsde::cxx::string_sequence Include_sequence;
    typedef Include_sequence::iterator Include_iterator;
    typedef Include_sequence::const_iterator Include_const_iterator;

    const Include_sequence&
    Include () const;

    Include_sequence&
    Include ();

    // Library
    //
    typedef ::xsde::cxx::string_sequence Library_sequence;
    typedef Library_sequence::iterator Library_iterator;
    typedef Library_sequence::const_iterator Library_const_iterator;

    const Library_sequence&
    Library () const;

    Library_sequence&
    Library ();

    private:
    Include_sequence Include_;
    Library_sequence Library_;
  };

  // Run (variable-length)
  //
  class Run
  {
    private:
    Run (const Run&);
    Run& operator= (const Run&);

    public:
    Run ();

    ~Run ();

    // Name
    //
    const ::std::string&
    Name () const;

    ::std::string&
    Name ();

    void
    Name (const ::std::string&);

    // Command
    //
    const ::std::string&
    Command () const;

    ::std::string&
    Command ();

    void
    Command (const ::std::string&);

    // Argument
    //
    typedef ::xsde::cxx::string_sequence Argument_sequence;
    typedef Argument_sequence::iterator Argument_iterator;
    typedef Argument_sequence::const_iterator Argument_const_iterator;

    const Argument_sequence&
    Argument () const;

    Argument_sequence&
    Argument ();

    private:
    ::std::string Name_;
    ::std::string Command_;
    Argument_sequence Argument_;
  };
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsde/cxx/post.hxx>

#endif // W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_HXX
