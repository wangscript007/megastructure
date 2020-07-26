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

#ifndef W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_PIMPL_HXX
#define W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_PIMPL_HXX

#include <xsde/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#ifndef XSDE_OMIT_PAGGR
#  define XSDE_OMIT_PAGGR
#  define W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_PIMPL_HXX_CLEAR_OMIT_PAGGR
#endif

#include "mega_schema-pskel.hxx"

#include <xsde/cxx/stack.hxx>

namespace megaxml
{
  class Package_pimpl: public Package_pskel
  {
    public:
    Package_pimpl (bool = false);

    ~Package_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    // Elements.
    //
    virtual void
    Name (const ::std::string&);

    virtual void
    Type (const ::std::string&);

    virtual void
    Directories (::megaxml::Directories*);

    virtual void
    Files (::megaxml::Files*);

    virtual void
    Command (const ::std::string&);

    virtual ::megaxml::Package*
    post_Package ();

    public:
    void
    pre_impl (::megaxml::Package*);

    public:
    struct Package_pimpl_state
    {
      ::megaxml::Package* Package_;
    };

    Package_pimpl_state Package_pimpl_state_;
    bool Package_pimpl_base_;
  };

  class Host_pimpl: public Host_pskel
  {
    public:
    Host_pimpl (bool = false);

    ~Host_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    virtual ::megaxml::Host*
    post_Host ();

    public:
    void
    pre_impl (::megaxml::Host*);

    public:
    ::megaxml::Package_pimpl base_impl_;

    public:
    struct Host_pimpl_state
    {
      ::megaxml::Host* Host_;
    };

    Host_pimpl_state Host_pimpl_state_;
    bool Host_pimpl_base_;
  };

  class Defaults_pimpl: public Defaults_pskel
  {
    public:
    virtual void
    pre ();

    virtual ::megaxml::Defaults
    post_Defaults ();

    public:
    struct Defaults_pimpl_state
    {
      ::megaxml::Defaults Defaults_;
    };

    Defaults_pimpl_state Defaults_pimpl_state_;
  };

  class Build_pimpl: public Build_pskel
  {
    public:
    virtual void
    pre ();

    // Elements.
    //
    virtual void
    Name (const ::std::string&);

    virtual void
    CompilerFlags (const ::std::string&);

    virtual void
    LinkerFlags (const ::std::string&);

    virtual ::megaxml::Build
    post_Build ();

    public:
    struct Build_pimpl_state
    {
      ::megaxml::Build Build_;
    };

    Build_pimpl_state Build_pimpl_state_;
  };

  class Project_pimpl: public Project_pskel
  {
    public:
    Project_pimpl (bool = false);

    ~Project_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    // Elements.
    //
    virtual void
    Host (const ::std::string&);

    virtual void
    Description (const ::std::string&);

    virtual void
    Package (const ::std::string&);

    virtual void
    Files (::megaxml::Files*);

    virtual void
    Build (const ::megaxml::Build&);

    virtual void
    Run (::megaxml::Run*);

    virtual void
    Defaults (const ::megaxml::Defaults&);

    virtual ::megaxml::Project*
    post_Project ();

    public:
    void
    pre_impl (::megaxml::Project*);

    public:
    struct Project_pimpl_state
    {
      ::megaxml::Project* Project_;
    };

    Project_pimpl_state Project_pimpl_state_;
    bool Project_pimpl_base_;
  };

  class Files_pimpl: public Files_pskel
  {
    public:
    Files_pimpl (bool = false);

    ~Files_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    // Elements.
    //
    virtual void
    System (const ::std::string&);

    virtual void
    Include (const ::std::string&);

    virtual void
    Source (const ::std::string&);

    virtual void
    Library (const ::std::string&);

    virtual ::megaxml::Files*
    post_Files ();

    public:
    void
    pre_impl (::megaxml::Files*);

    public:
    struct Files_pimpl_state
    {
      ::megaxml::Files* Files_;
    };

    Files_pimpl_state Files_pimpl_state_;
    bool Files_pimpl_base_;
  };

  class EG_pimpl: public EG_pskel
  {
    public:
    EG_pimpl (bool = false);

    ~EG_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    // Elements.
    //
    virtual void
    choice_arm (choice_arm_tag);

    virtual void
    Package (::megaxml::Package*);

    virtual void
    Host (::megaxml::Host*);

    virtual void
    Project (::megaxml::Project*);

    virtual ::megaxml::EG*
    post_EG ();

    public:
    void
    pre_impl (::megaxml::EG*);

    public:
    struct EG_pimpl_state
    {
      ::megaxml::EG* EG_;
    };

    EG_pimpl_state EG_pimpl_state_;
    bool EG_pimpl_base_;
  };

  class Directories_pimpl: public Directories_pskel
  {
    public:
    Directories_pimpl (bool = false);

    ~Directories_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    // Elements.
    //
    virtual void
    Include (const ::std::string&);

    virtual void
    Library (const ::std::string&);

    virtual ::megaxml::Directories*
    post_Directories ();

    public:
    void
    pre_impl (::megaxml::Directories*);

    public:
    struct Directories_pimpl_state
    {
      ::megaxml::Directories* Directories_;
    };

    Directories_pimpl_state Directories_pimpl_state_;
    bool Directories_pimpl_base_;
  };

  class Run_pimpl: public Run_pskel
  {
    public:
    Run_pimpl (bool = false);

    ~Run_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    // Elements.
    //
    virtual void
    Name (const ::std::string&);

    virtual void
    Command (const ::std::string&);

    virtual void
    Argument (const ::std::string&);

    virtual ::megaxml::Run*
    post_Run ();

    public:
    void
    pre_impl (::megaxml::Run*);

    public:
    struct Run_pimpl_state
    {
      ::megaxml::Run* Run_;
    };

    Run_pimpl_state Run_pimpl_state_;
    bool Run_pimpl_base_;
  };
}

#ifdef W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_PIMPL_HXX_CLEAR_OMIT_PAGGR
#  undef XSDE_OMIT_PAGGR
#endif

#ifndef XSDE_OMIT_PAGGR

namespace megaxml
{
  // Parser aggregate for the EG element.
  //
  class EG_paggr
  {
    public:
    EG_paggr ();

    void
    pre ()
    {
      this->EG_p_.pre ();
    }

    ::megaxml::EG*
    post ()
    {
      return this->EG_p_.post_EG ();
    }

    ::megaxml::EG_pimpl&
    root_parser ()
    {
      return this->EG_p_;
    }

    static const char*
    root_name ();

    static const char*
    root_namespace ();

    void
    reset ()
    {
      this->EG_p_._reset ();
    }

    public:
    ::xml_schema::string_pimpl string_p_;
    ::megaxml::Run_pimpl Run_p_;
    ::megaxml::Defaults_pimpl Defaults_p_;
    ::megaxml::Files_pimpl Files_p_;
    ::megaxml::Host_pimpl Host_p_;
    ::megaxml::EG_pimpl EG_p_;
    ::megaxml::Package_pimpl Package_p_;
    ::megaxml::Directories_pimpl Directories_p_;
    ::megaxml::Project_pimpl Project_p_;
    ::megaxml::Build_pimpl Build_p_;
  };
}

#endif // XSDE_OMIT_PAGGR

// Begin epilogue.
//
//
// End epilogue.

#include <xsde/cxx/post.hxx>

#endif // W__ROOT_MEGASTRUCTURE_SRC_SRC_SCHEMA_MEGA_SCHEMA_PIMPL_HXX
